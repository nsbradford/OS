/*
 * shift2user.c
 * Nicholas S. Bradford, Himanshu Sahay
 *
 */

#include <sys/syscall.h>
#include <stdio.h>
#include <linux/string.h>

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
	unsigned short target_pid = atoi(argv[1]);
	unsigned short target_uid = atoi(argv[2]);
	printf("\targs: %hu %hu\n", target_pid, target_uid);
	// Letting the kernel handle error-checking!
	long x = shift_to_user(&target_pid, &target_uid);
	printf("\tcs3013_syscall2: %ld\n", x);
	return 0;
}
