/*
 * shift2user.c
 * Nicholas S. Bradford, Himanshu Sahay
 *
 */

#include <sys/syscall.h>
#include <stdio.h>
#include <linux/string.h>
 #include <stdlib.h>
 #include <errno.h>

// These values MUST match the unistd_32.h modifications:
#define __NR_cs3013_syscall2 356
#define __NR_cs3013_syscall3 357
 

long shift_to_user(unsigned short *target_pid, unsigned short *target_uid){
	return (long) syscall(__NR_cs3013_syscall2, target_pid, target_uid);
}

int main (int argc, char *argv[]) {
	printf("shift2user:\n");
	if (argc != 3) {
		printf("\tUsage: ./shift2user target_pid target_uid\n");
		return 0;
	}
	unsigned short *target_pid = (unsigned short*)malloc(sizeof(unsigned short));
	*target_pid = atoi(argv[1]);
	unsigned short *target_uid = (unsigned short*)malloc(sizeof(unsigned short));
	*target_uid = atoi(argv[2]);
	
	// Switching to kernel to change the loginuid of the process
	int return_val = shift_to_user(target_pid, target_uid);
	if(return_val == EFAULT)
		printf("Failed to allocate memory in kernel space\n");
	else if(return_val == EPERM)
		printf("Permission denied. Cannot change to this user\n");
	else if(return_val == ESRCH)
		printf("Process not found\n");
	else if(return_val == 0)
		printf("The loginuid of process with ID %d has been changed to %d\n", *target_pid, *target_uid);

	return 0;
}
