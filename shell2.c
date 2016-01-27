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
	struct timeval start_time;
	struct timeval end_time;
}process;

// global declaration of processes
process processes[100]; // max 50 processes at one time
int num_processes;

void type_prompt();
int read_command(CmdArg *cmd);
int lastCharIsAmp(char **args, int n_args);
void execute(char *args[], int flag_background);
void process_end();
void free_args(CmdArg *cmd);
//void wait_for_children(int hang_val);

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
				// cmd->args[cmd->n_args - 1] = NULL;
				cmd->n_args --;
			}

			// Check if command is exit
			if (strcmp(cmd->args[0], "exit") == 0){
				//TODO
				//wait_for_children(1);
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
				printf("write jobs handler here\n");
				// go through list of processes and print each one
				int i;
				if (num_processes == 0)
					printf("No running processes.\n");
				else {
					printf("Running jobs are: \n");
					for (i = 0; i < num_processes; i++){
						if (processes[i].pid != 0)
							printf("[%d] Command: [%s]\n", processes[i].pid, processes[i].cmd);
					}
				}
			
			}

			else {
				execute(cmd->args, flag_background);
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
		args[num_args - 1] = NULL;
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

	int pid = fork();

/*
Algorithm within execute -

 create new process
 while with wait3 with pid
 find process with this pid that ended
 remove it from process list
 print stats

 else
 while wait4 without hang, print

 at the end, wait for any other running processes
 for each process, print and null it
 then adjust process array
 Finally, get time of day and print stats
*/

	if (pid != 0){
		/* Parent code. */

		struct timeval start_time;
		struct rusage start_usage;

		gettimeofday(&start_time, NULL);
		getrusage(RUSAGE_CHILDREN, &start_usage);

		if (flag_background) {

			//process is added to array of processes
			processes[num_processes].pid = pid;
			processes[num_processes].cmd = (char*) malloc(sizeof(command));
			gettimeofday(&processes[num_processes].start_time, NULL);
			strcpy(processes[num_processes].cmd, command);
			num_processes++;

			process_end();

		}		

		else {

			// foreground process
			struct rusage end_usage;
			struct timeval end_time;
			wait4(pid, NULL, 0, &end_usage);

			gettimeofday(&end_time, NULL);

			double wall_time_passed = (end_time.tv_sec - start_time.tv_sec) * 1000 	+ (end_time.tv_usec - start_time.tv_usec)/1000;
			double cpu_time_user = (end_usage.ru_utime.tv_sec) * 1000 + (end_usage.ru_utime.tv_usec)/1000;
			double cpu_time_system = (end_usage.ru_stime.tv_sec) * 1000 
				+ (end_usage.ru_stime.tv_usec)/1000;
			long involuntary = end_usage.ru_nivcsw;
			long voluntary = end_usage.ru_nvcsw;
			long page_faults = end_usage.ru_majflt;
			long page_faults_sat = end_usage.ru_minflt;

			printf("\n--STATS FOR FOREGROUND COMMAND: [%s]--\n", command);
			printf("Time passed: %f ms\n", wall_time_passed);
			printf("CPU user: %f ms\n", cpu_time_user);
			printf("CPU system: %f ms\n", cpu_time_system);
			printf("CPU user+system: %f ms\n", cpu_time_user+cpu_time_system);
			printf("Preempted CPU involuntary: %ld times\n", involuntary);
			printf("Preempted CPU voluntary: %ld times\n", voluntary);
			printf("Page faults: %ld times\n", page_faults);
			printf("Page faults (satisfiable): %ld times\n", page_faults_sat);
			printf("---------------------------------------------------------------\n");

			process_end();
		}
	}
	
	else {
		/* Child code. */
		if (execvp(command, &args[0]) < 0){
			printf("\nexecvp() failure\n");
			exit(-1);
		}
	}
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

void process_end(){

	struct rusage end_usage;
	pid_t lastpid = wait3(NULL, WNOHANG, &end_usage);
	
	while ( lastpid != 0 && lastpid != -1) {
		// find process with lastpid that ended
		int i;
		for (i = 0; i < num_processes; i++){
			if (lastpid == processes[i].pid){
				pid_t process_id = processes[i].pid;
				processes[i].pid = 0;

				num_processes--;
				gettimeofday(&processes[i].end_time, NULL);

				double wall_time_passed = (processes[i].end_time.tv_sec - processes[i].start_time.tv_sec) * 1000 
					+ (processes[i].end_time.tv_usec - processes[i].start_time.tv_usec)/1000;
				double cpu_time_user = (end_usage.ru_utime.tv_sec) * 1000+ (end_usage.ru_utime.tv_usec)/1000;
				double cpu_time_system = (end_usage.ru_stime.tv_sec) * 1000	+ (end_usage.ru_stime.tv_usec)/1000;
				long involuntary = end_usage.ru_nivcsw;
				long voluntary = end_usage.ru_nvcsw;
				long page_faults = end_usage.ru_majflt;
				long page_faults_sat = end_usage.ru_minflt;

				printf("\n--STATS FOR BACKGROUND PID: [%d], COMMAND: [%s]--\n", process_id, processes[i].cmd);
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

			lastpid = wait3(NULL, WNOHANG, &end_usage);

		}

	}
}