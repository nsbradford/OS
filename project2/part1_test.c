#include <sys/syscall.h>
#include <stdio.h>
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

/*
 * Returns 1 if input contains "VIRUS", 0 if not.
 */
int contains_virus(const char *haystack, size_t len_haystack) {
	char needle[] = "VIRUS";
	size_t len_needle = 5; // ignore the NULL-termination
	int found = 1;
	int i;
	int j;
	for (i = 0; i < len_haystack - len_needle + 1; i++) {
		found = 1;
		for (j = 0; j < len_haystack && j < len_needle; j++) {
			if (haystack[i + j] != needle[j]){
				found = 0;
				break;
			}
		}
		if (found){
			break;
		}
	}
	return found;
}

int user_space_contains_virus(const void *haystack, size_t len_haystack) {
	return (memmem(haystack, len_haystack, "VIRUS", 5)) ? 1 : 0;
}

int test_contains_virus(char haystack[], int len_haystack){
	return contains_virus(haystack, len_haystack);
}

int main () {
	printf("The return values of the system calls are:\n");
	printf("\tcs3013_syscall1: %ld\n", testCall1());
	printf("\tcs3013_syscall2: %ld\n", testCall2());
	printf("\tcs3013_syscall3: %ld\n", testCall3());
	printf("\ttest_contains_virus 0: %d\n", test_contains_virus("sdfsd", 5));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("VIRUS", 5));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("dsdfVIRUSsdf", 12));
	printf("\ttest_contains_virus 0: %d\n", test_contains_virus("dVIRUS", 5));
	printf("\ttest_contains_virus 1: %d\n", test_contains_virus("dVIRUS", 6));
	return 0;
}