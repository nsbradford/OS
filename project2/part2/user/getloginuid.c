/*
 * getloginuid.c
 * Nicholas S. Bradford, Himanshu Sahay
 *
 */

#include <sys/syscall.h>
#include <stdio.h>
#include <stdlib.h>
#include <linux/string.h>
#include <errno.h>

// These values MUST match the unistd_32.h modifications:
#define __NR_cs3013_syscall2 356
#define __NR_cs3013_syscall3 357


long get_login_uid (unsigned short *target_pid, unsigned short *actual_uid) {
	return (long) syscall(__NR_cs3013_syscall3, target_pid, actual_uid);
}

int main (int argc, char *argv[]) {
	printf("getloginuid:\n");
	if (argc != 2) {
		printf("\tUsage: ./getloginuid target_pid\n");
		return 0;
	}
	unsigned short *target_pid = (unsigned short*)malloc(sizeof(unsigned short));
	*target_pid = atoi(argv[1]);
	unsigned short *actual_uid = (unsigned short*)malloc(sizeof(unsigned short));
	// Sending the call down to the kernel
	int return_val = get_login_uid(target_pid, actual_uid);
	if(return_val == EFAULT)
		printf("Failed to allocate memory in kernel space\n");
	else if(return_val == ESRCH)
		printf("Process not found\n");
	else if(return_val == 0)
		printf("The loginuid of process with ID %d is %d\n", *target_pid, *actual_uid);
	return 0;
}
