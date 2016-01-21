/*
 * shell.c
 * Authors: Nicholas Bradford (nsbradford@wpi.edu), Himanshu Sahay (hsahay@wpi.edu)
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
#define DEBUG 0

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

	// fgets is causing errors when reading commands from file, using gets instead
	// char argbuf[MAX_BUFFER];
	// fgets(argbuf, MAX_BUFFER, stdin);

	// // fgets() includes a newline char, so turn it into NULL
	// argbuf[strlen(argbuf) - 1] = '\0';



	// TODO: be able to read quoted commands (see forum post)
	char argbuf[MAX_BUFFER];
	gets(argbuf);

	// alert the user if their command is too long
	if (strlen(argbuf) > MAX_CHARS){
		printf("ERROR: shell supports only %d chars, not %d\n.", MAX_CHARS, strlen(argbuf));
		return;
	}

	if (DEBUG) printf("%s\n", argbuf);

	char *token = strtok(argbuf, " ");
	int i = 0;
	while(token != NULL) {
		if (DEBUG) printf("token:[%s]\n", token);
		args[i] = (char*)malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(args[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	args[i] = NULL; // must NULL-terminate to use execvp()

	int j;
	for (j=0; j<i; j++){
		if (DEBUG) printf("args: %s\n", args[j]);
	}
}

/*
 * Executes a command from a list of args,
 * where args[0] is the command, and the rest are params.
 * 
 */
void execute(char *args[]){
	char *command = args[0];
	if (DEBUG) printf("command: %s", command);
	if (fork() != 0){
		/* Parent code. */

		/* Check if command is exit or cd dir 
			In either of those conditions, the command is not forked and executed in a child process.
			Instead, these are executed in-line in the shell process itself
		*/

		// // Check if command is exit
			// This exit check is breaking, (string is comparing with "ex")
		// if (strcmp(command, "exit") == 0){
		// 	printf("Exiting the shell.\n");
		// 	exit(-1);
		// }

		// // Check if command is cd
		// else if (strcmp(command, "cd") == 0){
		// 	chdir(args[2]);
		// 	char cwd[1024];
		// 	if (getcwd(cwd, sizeof(cwd)) != NULL)
		// 	fprintf(stdout, "Current working dir: %s\n", cwd);
		// }


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
		long page_faults = end_usage.ru_majflt - start_usage.ru_majflt;
		long page_faults_sat = end_usage.ru_minflt - start_usage.ru_minflt;

		printf("\n--STATS--\n");
		printf("Time passed: %f ms\n", wall_time_passed);
		printf("CPU user: %f ms\n", cpu_time_user);
		printf("CPU system: %f ms\n", cpu_time_system);
		printf("CPU user+system: %f ms\n", cpu_time_user+cpu_time_system);
		printf("Preempted CPU involuntary: %ld times\n", involuntary);
		printf("Preempted CPU voluntary: %ld times\n", voluntary);
		printf("Page faults: %ld times\n", page_faults);
		printf("Page faults (satisfiable): %ld times\n", page_faults_sat);
		printf("---------------------------------------------------------------\n");
	}
	else {
		/* Child code. */
		if (execvp(command, &args[0]) < 0){
			printf("\nexecvp() failure\n");
		}
	}
}

/*
 * free() the allocated memory in args.
 * 
 */
void free_args(char *args[]){
	// TODO
	if (DEBUG)
		printf("freeing memory in args\n");
	free(*args);
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

		// Check if command is exit
		if (strcmp(args[0], "exit") == 0){
			printf("Exiting the shell.\n");
			// exit(-1);
			return(EXIT_SUCCESS);
		}

		// Check if command is cd
		// ERROR: cd is currently not working, causing execvp failure!
		else if (strcmp(args[0], "cd") == 0){
			chdir(args[2]);
			char cwd[1024];
			if (getcwd(cwd, sizeof(cwd)) != NULL)
			fprintf(stdout, "Current working dir: %s\n", cwd);
		}

		execute(args);
		free_args(args);
		// TODO free() the memory in args!
		// TODO Store getrusage() data about previous child 
		/* Reason: getrusage() returns the cumulative statistics for all children of a process, not just the statistics for 
		the most recent child. Keep a record of the statistics of previous children. When you call getrusage() after a particular child has terminated,
		subtract the previous statistics from the most recent ones returned by getrusage() in order to find out how many resources 
		that the particular child used */

	}
	return 0;
}
