/*
Algorithm within execute
 create new process
 while with wait3 with pid
 find process with this pid that ended
 remove it from process list
 getrusage and print stats

 else
 while wait4 without hang, get usage and print

 at the end, wait for any other running processes
 for each process, print and null it
 then adjust process array
 Finally, get time of day and print stats

*/

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
#define FALSE 0
#define MAX_CHARS 128
#define MAX_BUFFER 256
#define MAX_ARGS 32
#define DEBUG 1

typedef struct cmdArg {
	int n_args;
	char **args;
} CmdArg;

typedef struct {
	pid_t pid;
	char* cmd;
}process;

// global declaration of processes
process processes[100]; // max 50 processes at one time
int num_processes;

void type_prompt();
int read_command(CmdArg *cmd);
int lastCharIsAmp(char **args, int n_args);
void execute(char *args[]);
void execute_background(char *args[]);
void free_args(CmdArg *cmd);
void print_running_processes();
void wait_for_children(int hang_val);

/*
 * Run the shell.
 * 
 */
int main(int argc, char *argv[]){

	while(TRUE){
		// Read from stdnin
		int flag_background = FALSE;
		type_prompt();
		CmdArg *cmd = malloc(sizeof(CmdArg));
		cmd->args = malloc((MAX_ARGS+1) * sizeof(char*));

		if (read_command(cmd) > 0){
			
			if (lastCharIsAmp(cmd->args, cmd->n_args)){
				flag_background = TRUE;
				// Now, strip the last '&' arg and reduce cmd->n_args by 1
				free(cmd->args[cmd->n_args - 1]);
				cmd->n_args --;
			}

			// Check if command is exit
			if (strcmp(cmd->args[0], "exit") == 0){
				wait_for_children(1);
				printf("Exiting the shell.\n");
				// exit(-1);
				return(EXIT_SUCCESS);
			}
			// Check if command is cd
			else if (strcmp(cmd->args[0], "cd") == 0){
				chdir(cmd->args[1]);
				char cwd[1024];
				if (DEBUG){
					if (getcwd(cwd, sizeof(cwd)) != NULL)
						fprintf(stdout, "Current working dir: %s\n", cwd);
				}
			}
			// if command is jobs, print all running processes
			else if (strcmp(cmd->args[0], "jobs") == 0){
				print_running_processes();
// NOTE: DO WE NEED TO CONTINUE HERE?
				//continue;
			}

			// if command is a background command, execute it appropriately
			else if (flag_background) {
				printf("Command is for a background process.\n");
				if (DEBUG){
					int i;
					for(i=0; i < cmd->n_args; i++)
						printf("background_args: %s\n", cmd->args[i]);
				}
				execute_background(cmd->args);
			}
			else {
				execute(cmd->args);
			}

			free_args(cmd);
		}

	}
	return 0;
}

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
int read_command(CmdArg *cmd){

	// TODO: be able to read quoted commands (see forum post)
	char argbuf[MAX_BUFFER];
	fgets(argbuf, MAX_BUFFER, stdin);

	// alert the user if their command is too long
	if (strlen(argbuf) > MAX_CHARS){
		printf("ERROR: shell supports only %d chars, not %d\n.", MAX_CHARS, strlen(argbuf));
		return -1;
	}
	else if (strlen(argbuf) == 1){
		printf("ERROR: no input.\n");
		return -1;
	}
	if (DEBUG) printf("Shell read %d chars.\n", strlen(argbuf));

	//fgets() includes a newline char, so turn it into NULL
	argbuf[strlen(argbuf) - 1] = '\0';
	if (DEBUG) printf("argbuf: %s\n", argbuf);

	// if EOF, exit
	if(feof(stdin)) {
		if (DEBUG) printf("Found EOF\n");
		exit(0);
	}


	char *token = strtok(argbuf, " ");
	int i = 0;
	while(token != NULL) {
		if (DEBUG) printf("token:[%s]\n", token);
		cmd->args[i] = (char*)malloc(sizeof(char) * (strlen(token) + 1));
		strcpy(cmd->args[i], token);
		i++;
		token = strtok(NULL, " ");
	}
	cmd->args[i] = NULL; // must NULL-terminate to use execvp()
	cmd->n_args = i;

	if (cmd->n_args > MAX_ARGS){
		printf("ERROR: shell supports only %d chars, not %d\n.", MAX_ARGS, cmd->n_args);
		return -1;
	}

	int j;
	for (j=0; j<i; j++){
		if (DEBUG) printf("args: %s\n", cmd->args[j]);
	}

	return 1;
}

/*
 * Return TRUE if there is an '&' at the end of the string.
 * Remove the '&' if it exists.
 *
 */
int lastCharIsAmp(char *args[], int num_args){
// Check last argument for ampersand character
	char *end = args[num_args - 1];
	int answer;
	if (strcmp(end,"&") == 0){
		answer = TRUE;
		// arg[end] = '\0';
	}
	else{
		answer = FALSE;
	}
	if (DEBUG) printf("&: %d\n", answer);
	return answer;
}



/*
 * Executes a command from a list of args,
 * where args[0] is the command, and the rest are params.
 * 
 */
void execute(char *args[], int flag_background){
	char *command = args[0];
	if (DEBUG) printf("command: %s", command);

	pid = fork();

	if (pid != 0){
		/* Parent code. */

		int status;
		struct timeval start_time;
		struct timeval end_time;
		struct rusage start_usage;
		struct rusage end_usage;

		gettimeofday(&start_time, NULL);
		getrusage(RUSAGE_CHILDREN, &start_usage);

		wait3(&status, 0, &end_usage); //waitpid(-1, &status, 0);
		
		gettimeofday(&end_time, NULL);

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

void execute_background(char *args[]){
	char *command = args[0];
	int pid = fork();

	//process is added to array of processes
	processes[num_processes].pid = pid;
	processes[num_processes].cmd = (char*) malloc(sizeof(command));
	strcpy(processes[num_processes].cmd, command);
	gettimeofday(&processes[num_processes].start_time, NULL);
	num_processes++;
	

	if (pid > 0){
		// Parent
		wait_for_children(0);
	}
	else {
		// Child
		printf("[%d] %d\n", num_processes, pid);
		if (execvp(command, &args[1]) < 0){
			printf("\nbackground execvp() failure\n");
			exit(-1);
		}
	}
}

/*
 * return total prev usage stats before a child process
 */
struct rusage init_prev_usage(){
	struct rusage total_prev_usage;
	getrusage(RUSAGE_CHILDREN, &total_prev_usage);
	return total_prev_usage;
}

/* 
 *	Calculate usage stats of child process
 */

struct rusage cal_rusage(struct rusage end_usage){

	struct rusage total_prev_usage = init_prev_usage();

	// subtract total prev usage from end usage of this child process
	end_usage.ru_utime.tv_sec -= total_prev_usage.ru_utime.tv_sec;
	end_usage.ru_utime.tv_usec -= total_prev_usage.ru_utime.tv_usec;
	end_usage.ru_stime.tv_sec -= total_prev_usage.ru_stime.tv_sec;
	end_usage.ru_stime.tv_usec -= total_prev_usage.ru_stime.tv_usec;
	end_usage.ru_nivcsw -= total_prev_usage.ru_nivcsw;
	end_usage.ru_nvcsw -= total_prev_usage.ru_nvcsw;
	end_usage.ru_minflt -= total_prev_usage.ru_minflt;
	end_usage.ru_majflt -= total_prev_usage.ru_majflt;

	// reset total prev
	getrusage(RUSAGE_CHILDREN, &total_prev_usage);

	return end_usage;
}

/*
 * Wait for child processes to finish, and report stats. 
 * Keep waiting for the next until there are no more
 * if wait indicats that no child processes have finished lately, return and prompt for the next command  
 */
 void wait_for_children(int hang_val){
 	int status;
 	struct rusage end_usage;
 	int pid;

 	if (hang_val == 0){
 		// stops the parent from blocking until children finish
	 	pid = wait3(&status, hang_val, &end_usage);
 	}
 	else{
 		pid = wait3(&status, WNOHANG, &end_usage);
 	}

 	while(pid != 0){

 		if (pid > 0){

 			// if child terminates normally
 			if (WIFEXITED(status) != 0) {
 				if (WEXITSTATUS(status) == 0)	{
 					printf("%d exited normally\n", pid);
 					struct rusage usage = cal_rusage(end_usage);

 					double cpu_time_user = (usage.ru_utime.tv_sec) * 1000 + (usage.ru_utime.tv_usec)/1000;
					double cpu_time_system = (usage.ru_stime.tv_sec) * 1000 + (usage.ru_stime.tv_usec)/1000;
					long involuntary = usage.ru_nivcsw;
					long voluntary = usage.ru_nvcsw;
					long page_faults = usage.ru_majflt;
					long page_faults_sat = usage.ru_minflt;

 					printf("\n--BACKGROUND PROCESS STATS pid: %d--\n", pid);
					printf("CPU user: %f ms\n", cpu_time_user);
					printf("CPU system: %f ms\n", cpu_time_system);
					printf("CPU user+system: %f ms\n", cpu_time_user+cpu_time_system);
					printf("Preempted CPU involuntary: %ld times\n", involuntary);
					printf("Preempted CPU voluntary: %ld times\n", voluntary);
					printf("Page faults: %ld times\n", page_faults);
					printf("Page faults (satisfiable): %ld times\n", page_faults_sat);
					printf("---------------------------------------------------------------\n");

 				}
 				else{
 					printf("%d did not exit normally\n", pid);
 				}
 			}
 			else{
 				if (pid == -1){
 					printf("ERROR pid is -1 even though process exited correctly\n");
 				}
 				else{
 					printf("[%d] terminated\n", pid);
 				}
 			}
 		}

 		else {
 			// no children to wait for
 			break;
 		}

 		// update pid
 	 	if (hang_val == 0){
	 		// stops the parent from blocking until children finish
		 	pid = wait3(&status, hang_val, &end_usage);
	 	}
	 	else{
	 		pid = wait3(&status, WNOHANG, &end_usage);
	 	}
 

 	}
 	printf("No more waiting for children\n");

 }


/*
 * free() the allocated memory in args.
 * 
 */
void free_args(CmdArg *cmd){
	if (DEBUG) printf("freeing memory in args\n");
	int i;
	for(i = 0; i < cmd->n_args; i++) {
		free(cmd->args[i]);
	}
	free(cmd->args);
	free(cmd);
}

/*
 * Print list of processes currently running.
 * 
 */
void print_running_processes(){
	//TODO
	// jobs command
}
