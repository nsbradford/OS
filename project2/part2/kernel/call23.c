/*
 * call23.c
 * Himanshu Sahay, Nicholas S. Bradford
 *
 */

 /*
To keep in mind
The shift2user
parameters: the process ID (PID) to shift and the new user ID the process should run as. 
The command will then go through all the processes running on the system and find the
targeted PID. It will then change the user ID associated with the process to reflect the user ID parameter.
If the user running the process is a non-privileged user (i.e., not root), the user should only be able to shift
processes currently owned by that user and the target user ID should only be to user ID 1001. For the root
user, this restriction should be waived.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <linux/sched.h>
#include <linux/uaccess.h>
#include <linux/slab.h>


unsigned long **sys_call_table;
asmlinkage long (*ref_sys_cs3013_syscall2)(unsigned short *target_pid, unsigned short *target_uid);
asmlinkage long (*ref_sys_cs3013_syscall3)(unsigned short *target_pid, unsigned short *actual_uid);

// helper for cs30313_syscall2
int search_for_process_syscall2(unsigned short *target_pid, unsigned short *target_uid){

	struct task_struct *child_process;

	// iterates over all the tasks under init
	list_for_each_entry(child_process, &((&init_task)->tasks), tasks){
		if (child_process->pid == *target_pid){

			// check if user process
			if (current_uid().val >= 1000){
				// invoking user owns the process
				if (child_process->loginuid.val == current_uid().val || child_process->loginuid.val == (-1) 
					|| child_process->loginuid.val == 65535 )
				{
					
					if (*target_uid == 1001){
						// now, we can assign to the new user
						kuid_t new_kuidt;
						new_kuidt.val = *target_uid; 
						child_process->loginuid = new_kuidt;
						//child_process->loginuid.val = *target_uid;
						printk(KERN_INFO "User with UID %d changed loginuid of process with PID %d to %d.\n", current_uid().val, *target_pid, *target_uid);
						return 0; // success
					}
					else {
						// operation not permitted error
						printk(KERN_INFO "ERROR: Cannot change the UID to anything other than 1001.\n");
						return EPERM;
					}
				}
				else{
					printk(KERN_INFO "ERROR: Invoking user UID %d does not own the process.\n", current_uid().val);
					return EPERM;
				}
			}

			// root process
			else{
				// has all priveleges
				// now, we can assign to the new user
				child_process->loginuid.val = *target_uid;
				printk(KERN_INFO "User with UID %d changed loginuid of process with PID %d to %d.\n", current_uid().val, *target_pid, *target_uid);
				return 0; // success
			}
		}
	}

	// no child process error
	printk(KERN_INFO "ERROR: Process with PID %d not found.\n", *target_pid);
	return ESRCH;

}

/*
 * Replace cs3013_syscall2. Linked to shift2user
 * Must have memory allocated in user space before invoking system call
 * Returns: 0 if successful, -1 if unsuccessful (error code)
 */
asmlinkage long new_sys_cs3013_syscall2(unsigned short *target_pid, unsigned short *target_uid) {
	unsigned short *new_target_pid;
	unsigned short *new_target_uid;
	int return_val;

	// malloc space for these new variables
	new_target_pid = (unsigned short *)kmalloc(sizeof(unsigned short), GFP_KERNEL);
	new_target_uid = (unsigned short *)kmalloc(sizeof(unsigned short), GFP_KERNEL);

	/* copy data from target_pid to area in user space pointed to by
	new_target_pid */
	if (copy_from_user(new_target_pid, target_pid, sizeof(unsigned short)))
		return EFAULT;
	/* copy data from target_uid to area in user space pointed to by
	new_target_uid */		
	if (copy_from_user(new_target_uid, target_uid, sizeof(unsigned short)))
		return EFAULT;

	return_val = search_for_process_syscall2(new_target_pid, new_target_uid);

	// free memory in kernel
	kfree(new_target_pid);
	kfree(new_target_uid);

	return return_val;

}

// helper for cs3013_syscall3
int search_for_process_syscall3(unsigned short *actual_pid, unsigned short *actual_uid){

	struct task_struct *child_process;

	// iterates over all the tasks under init
	list_for_each_entry(child_process, &((&init_task)->tasks), tasks){
		
		if (child_process->pid == *actual_pid){
			
			// variable to fetch login uid into user space
			unsigned short *loginuid = (unsigned short *)kmalloc(sizeof(unsigned short), GFP_KERNEL);
			*loginuid = child_process->loginuid.val;

			if (copy_to_user(actual_uid, loginuid, sizeof(unsigned short))){
				printk(KERN_INFO "ERROR: Copy of loginuid %d to user space failed.\n", *loginuid);
				return EFAULT; // bad address error
			}

			// successful copy of loginuid to user space
			printk(KERN_INFO "Successfully copied loginuid %d to user space.\n", *loginuid);
			return 0;
		}
	}

	// no child process error
	printk(KERN_INFO "ERROR: Process with PID %d not found.\n", *actual_pid);
	return ESRCH;

}


/*
 * Replace cs3013_syscall3.
 */
asmlinkage long new_sys_cs3013_syscall3(unsigned short *target_pid, unsigned short *actual_uid) {
	// look through all processes again, if process with required pid is found, return the loginuid
	unsigned short *new_target_pid;
	int return_val;

	// malloc space for these new variables
	new_target_pid = (unsigned short *)kmalloc(sizeof(unsigned short), GFP_KERNEL);

	/* copy data from target_pid to area in user space pointed to by
	new_target_pid */
	if (copy_from_user(new_target_pid, target_pid, sizeof(unsigned short)))
		return EFAULT;

	return_val = search_for_process_syscall3(new_target_pid, actual_uid);

	// free kernel memory
	kfree(new_target_pid);

	return return_val;
}

static unsigned long **find_sys_call_table(void) {
	unsigned long int offset = PAGE_OFFSET;
	unsigned long **sct;

	while (offset < ULLONG_MAX) {
		sct = (unsigned long **)offset;

		if (sct[__NR_close] == (unsigned long *) sys_close) {
			printk(KERN_INFO "Interceptor: Found syscall table at address: 0x%02lX\n",
			(unsigned long) sct);
			return sct;
		}

	offset += sizeof(void *);
	}

	return NULL;
}

static void disable_page_protection(void) {
	/*
	Control Register 0 (cr0) governs how the CPU operates.
	Bit #16, if set, prevents the CPU from writing to memory marked as
	read only. Well, our system call table meets that description.
	But, we can simply turn off this bit in cr0 to allow us to make
	changes. We read in the current value of the register (32 or 64
	bits wide), and AND that with a value where all bits are 0 except
	the 16th bit (using a negation operation), causing the write_cr0
	value to have the 16th bit cleared (with all other bits staying
	the same. We will thus be able to write to the protected memory.
	It’s good to be the kernel!
	*/
	write_cr0 (read_cr0 () & (~ 0x10000));
}

static void enable_page_protection(void) {
	/*
	See the above description for cr0. Here, we use an OR to set the
	16th bit to re-enable write protection on the CPU.
	*/
	write_cr0 (read_cr0 () | 0x10000);
}

static int __init interceptor_start(void) {
	/* Find the system call table */
	if(!(sys_call_table = find_sys_call_table())) {
		/* Well, that didn’t work.
		Cancel the module loading step. */
		return -1;
	}

	/* Store a copy of all the existing functions */
	ref_sys_cs3013_syscall2 = (void *)sys_call_table[__NR_cs3013_syscall2];
	ref_sys_cs3013_syscall3 = (void *)sys_call_table[__NR_cs3013_syscall3];

	/* Replace the existing system calls */
	disable_page_protection();

	sys_call_table[__NR_cs3013_syscall2] = (unsigned long *)new_sys_cs3013_syscall2;
	sys_call_table[__NR_cs3013_syscall3] = (unsigned long *)new_sys_cs3013_syscall3;

	enable_page_protection();

	/* And indicate the load was successful */
	printk(KERN_INFO "Loaded interceptor!\n");

	return 0;
}

static void __exit interceptor_end(void) {
	/* If we don’t know what the syscall table is, don’t bother. */
	if(!sys_call_table)
		return;

	/* Revert all system calls to what they were before we began. */
	disable_page_protection();
	sys_call_table[__NR_cs3013_syscall2] = (unsigned long *)ref_sys_cs3013_syscall2;
	sys_call_table[__NR_cs3013_syscall3] = (unsigned long *)ref_sys_cs3013_syscall3;
	enable_page_protection();

	printk(KERN_INFO "Unloaded interceptor!\n");
}


MODULE_LICENSE("GPL");
module_init(interceptor_start);
module_exit(interceptor_end);
