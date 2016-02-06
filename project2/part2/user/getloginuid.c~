/*
 * getloginuid.c
 * Nicholas S. Bradford, Himanshu Sahay
 *
 */

#include <sys/syscall.h>
#include <stdio.h>
#include <linux/string.h>

// These values MUST match the unistd_32.h modifications:
#define __NR_cs3013_syscall2 356
#define __NR_cs3013_syscall3 357


long get_login_uid (unsigned short *target_pid, unsigned short *actual_uid) {
	return (long) syscall(__NR_cs3013_syscall3, target_pid, actual_uid);
}

int main (int argc, char *argv[]) {
	printf("getloginuid:\n");
	if (argc != 3) {
		printf("\tUsage: ./getloginuid target_pid target_uid\n");
		return 0;
	}
	unsigned short target_pid = atoi(argv[1]);
	unsigned short actual_uid = atoi(argv[2]);
	// Letting the kernel handle error-checking!
	get_login_uid(&target_pid, &actual_uid);
	return 0;
}
