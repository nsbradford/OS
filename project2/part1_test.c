#include <sys/syscall.h>
#include <stdio.h>
#include <linux/string.h>
// These values MUST match the unistd_32.h modifications:
#define __NR_cs3013_syscall1 355
#define __NR_cs3013_syscall2 356
#define __NR_cs3013_syscall3 357

long testCall1 ( void) {
	return (long) syscall(__NR_cs3013_syscall1);
}
long testCall2 ( void) {
	return (long) syscall(__NR_cs3013_syscall2);
}

long testCall3 ( void) {
	return (long) syscall(__NR_cs3013_syscall3);
}


int user_space_contains_virus(const void *haystack, size_t len_haystack) {
	return (memmem(haystack, len_haystack, "VIRUS", 5)) ? 1 : 0;
}

int test_contains_virus(char haystack[]){
	if (strstr(haystack, "VIRUS") != NULL)
		return 1;
	else
		return 0;
}

int main () {
	printf("The return values of the system calls are:\n");
	printf("\tcs3013_syscall1: %ld\n", testCall1());
	printf("\tcs3013_syscall2: %ld\n", testCall2());
	printf("\tcs3013_syscall3: %ld\n", testCall3());
	printf("\ttest_contains_virus 0: %d\n", test_contains_virus("sdfsd"));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("VIRUS"));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("dsdfVIRUSsdf"));
	printf("\ttest_contains_virus 0: %d\n", test_contains_virus("dVIRUS"));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("dVIRUS"));
	return 0;
}
