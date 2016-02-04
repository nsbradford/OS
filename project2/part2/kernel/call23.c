/*
 * call23.c
 * Nicholas S. Bradford, Himanshu Sahay
 *
 */

 /*

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
//#include <linux/sched.h>

unsigned long **sys_call_table;
asmlinkage long (*ref_sys_cs3013_syscall2)(unsigned short *target_pid, unsigned short *target_uid);
asmlinkage long (*ref_sys_cs3013_syscall3)(unsigned short *target_pid, unsigned short *actual_uid);


/*
 * Replace cs3013_syscall2.
 * Must have memory allocated in user space before invoking system call
 * Returns: 0 if successful, -1 if unsuccessful (error code)
 */
asmlinkage long new_sys_cs3013_syscall2(unsigned short *target_pid, unsigned short *target_uid) {
	printk(KERN_INFO "syscall2!");
	return 0;
}

/*
 * Replace cs3013_syscall3.
 */
asmlinkage long new_sys_cs3013_syscall3(unsigned short *target_pid, unsigned short *actual_uid) {
	// TODO
	printk(KERN_INFO "syscall3!");
	return 0;
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
