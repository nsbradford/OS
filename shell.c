/*
 * shell.c
 * Nicholas Bradford, Himanshu Sahay
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/resource.h>

#define TRUE 1
#define MAX_CHARS 256
#define MAX_BUFFER 512
#define MAX_ARGS 64

/*
 * Types the prompt.
 * 
 */
void type_prompt(){
	printf("prompt$ ");
}

/*
 * Reads a command.
 * 
 */
void read_command(char *args[]){
	char argbuf[MAX_BUFFER];
	fgets(argbuf, MAX_BUFFER, stdin);

	// fgets() includes a newline char, so turn it into NULL
	argbuf[strlen(argbuf) - 1] = '\0';

	// alert the user if their command is too long
	if (strlen(argbuf) > MAX_CHARS){
		printf("ERROR: shell supports only %d chars, not %d\n.", MAX_CHARS, strlen(argbuf));
		return;
	}

	printf("%s\n", argbuf);

	char *token = strtok(argbuf, " ");
	int i = 0;
	while(token != NULL) {
		printf("token:[%s]\n", token);
		args[i] = (char*)malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(args[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	args[i] = NULL; // must NULL-terminate to use execvp()

	int j;
	for (j=0; j<i; j++){
		printf("args: %s\n", args[j]);
	}
}

/*
 * Executes a command from a list of args,
 * where args[0] is the command, and the rest are params.
 * 
 */
void execute(char *args[]){
	char *command = args[0];
	printf("command: %s", command);
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
		printf("Preempted CPU voluntary: %ld times\n", voluntary);
		printf("Page faults: %ld times\n", page_faults);
		printf("Page faults (satisfiable): %ld times\n", page_faults_sat);
	}
	else {
		/* Child code. */
		if (execvp(command, &args[0]) < 0){
			printf("execvp failure\n");
		}
		printf("execvp failure\n");
	}
}

/*
 * free() the allocated memory in args.
 * 
 */
void free_args(char *args[]){
	// TODO
}

/*
 * Run the shell.
 * 
 */
int main(int argc, char *argv[]){
	while(TRUE){
		// Read from stdnin
		type_prompt();
		char *args[MAX_ARGS];
		read_command(args);
		execute(args);
		// TODO free() the memory in args!
	}
	return 0;
}
