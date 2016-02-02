/*
 * scanner.c
 * Nicholas S. Bradford
 *
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/syscalls.h>
#include <linux/string.h>

unsigned long **sys_call_table;
asmlinkage long (*ref_sys_cs3013_syscall1)(void);
asmlinkage long (*ref_sys_open)(const char *pathname, int flags, umode_t mode);
asmlinkage long (*ref_sys_read)(int fd, void *buf, size_t count);
asmlinkage long (*ref_sys_close)(int fd);


// // /*
// //  * Returns 1 if input contains the bad string, 0 if not.
// //  */
// int contains_virus(const char *haystack, size_t len_haystack) {		
// 	char needle[] = {'V', 'I', 'R', 'U', 'S'}; // DO NOT spell the word out here!		
// 	size_t len_needle = 5; // ignore the NULL-termination		
// 	int found = 1;		
// 	int i;		
// 	int j;		
// 	for (i = 0; i < len_haystack - len_needle + 1; i++) {		
// 		found = 1;		
// 		for (j = 0; j < len_haystack && j < len_needle; j++) {		
// 			if (haystack[i + j] != needle[j]){		
// 				found = 0;		
// 				break;		
// 			}		
// 		}		
// 		if (found){		
// 			break;		
// 		}		
// 	}		
// 	return found;		
// }
/*
 * Replace cs3013_syscall1.
 */
asmlinkage long new_sys_cs3013_syscall1(void) {
	printk(KERN_INFO "\"’Hello world?!’ More like ’Goodbye, world!’ EXTERMINATE!\" -- Dalek");
	return 0;
}

/*
 * Replace sys_open.
 */
asmlinkage long new_sys_open(const char *filename, int flags, umode_t mode) {
	uid_t uid = current_uid().val;
	if(uid >= 1000) {
		printk(KERN_INFO "User %d is opening file: %s\n", uid, filename);
	}
	return ref_sys_open(filename, flags, mode);
}

/*
 * Replace sys_read.
 */
asmlinkage long new_sys_read(unsigned int fd, char __user *buf, size_t count) {
	uid_t uid = current_uid().val;
	int ret_value = ref_sys_read(fd, buf, count);
	if(uid >= 1000) {
		if (strstr(buf) != NULL) {
			printk(KERN_INFO "User %d is reading file: %d, but it contains malicious code!\n", uid, fd);
		}
		else {
			printk(KERN_INFO "User %d is reading file: %d\n", uid, fd);
		}
	}
	return ret_value;
}

/*
 * Replace sys_close.
 */
asmlinkage long new_sys_close(unsigned int fd) {
	int uid = current_uid().val;
	if(uid >= 1000) {
		printk(KERN_INFO "User %d is closing file descriptor: %d\n", uid, fd);
	}

	return ref_sys_close(fd);
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
	ref_sys_cs3013_syscall1 = (void *)sys_call_table[__NR_cs3013_syscall1];
	ref_sys_open = (void *)sys_call_table[__NR_open];
	ref_sys_read = (void *)sys_call_table[__NR_read];
	ref_sys_close = (void *)sys_call_table[__NR_close];

	/* Replace the existing system calls */
	disable_page_protection();

	sys_call_table[__NR_cs3013_syscall1] = (unsigned long *)new_sys_cs3013_syscall1;
	sys_call_table[__NR_open] = (unsigned long *)new_sys_open;
	sys_call_table[__NR_read] = (unsigned long *)new_sys_read;
	sys_call_table[__NR_close] = (unsigned long *)new_sys_close;

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
	sys_call_table[__NR_cs3013_syscall1] = (unsigned long *)ref_sys_cs3013_syscall1;
	sys_call_table[__NR_open] = (unsigned long *)ref_sys_open;
	sys_call_table[__NR_read] = (unsigned long *)ref_sys_read;
	sys_call_table[__NR_close] = (unsigned long *)ref_sys_close;
	enable_page_protection();

	printk(KERN_INFO "Unloaded interceptor!\n");
}

MODULE_LICENSE("GPL");
module_init(interceptor_start);
module_exit(interceptor_end);
