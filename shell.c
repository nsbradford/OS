#include <stdio.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/resource.h>


int execute(char *argv[]){
	char *command = argv[1];
	
	if (fork() != 0){
		/* Parent code. */
		int status;
		struct timeval start_time;
		struct timeval end_time;
		struct rusage start_usage;
		struct rusage end_usage;

		gettimeofday(&start_time, NULL);
		getrusage(RUSAGE_CHILDREN, &start_usage);

		waitpid(-1, &status, 0);
		
		gettimeofday(&end_time, NULL);
		getrusage(RUSAGE_CHILDREN, &end_usage);
		double wall_time_passed = (end_time.tv_sec - start_time.tv_sec) * 1000 
			+ (end_time.tv_usec - start_time.tv_usec)/1000;
		double cpu_time_user = (end_usage.ru_utime.tv_sec - start_usage.ru_utime.tv_sec) * 1000 
			+ (end_usage.ru_utime.tv_usec - start_usage.ru_utime.tv_usec)/1000;
		double cpu_time_system = (end_usage.ru_stime.tv_sec - start_usage.ru_stime.tv_sec) * 1000 
			+ (end_usage.ru_stime.tv_usec - start_usage.ru_stime.tv_usec)/1000;
		long involuntary = end_usage.ru_nivcsw - start_usage.ru_nivcsw;
		long voluntary = end_usage.ru_nvcsw - start_usage.ru_nvcsw;
		long page_faults = end_usage.ru_majflt + end_usage.ru_minflt
			- start_usage.ru_majflt - start_usage.ru_minflt;
		long page_faults_sat = end_usage.ru_minflt - start_usage.ru_minflt;

		printf("\n");
		printf("Time passed: %f ms\n", wall_time_passed);
		printf("CPU user: %f ms\n", cpu_time_user);
		printf("CPU system: %f ms\n", cpu_time_system);
		printf("CPU user+system: %f ms\n", cpu_time_user+cpu_time_system);
		printf("Preempted CPU involuntary: %ld times\n", involuntary);
		printf("Page faults: %ld times\n", page_faults);
		printf("Page faults (satisfiable): %ld times\n", page_faults_sat);
	}
	else {
		/* Child code. */
		execvp(command, &argv[1]);
	}
}


int main(int argc, char *argv[]){
	execute(argv);
	return 0;
}

// getrusage()