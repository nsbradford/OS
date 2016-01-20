#include <stdio.h>
#define TRUE 1

int main1(void)
{
  char *execArgs[] = { "echo", "Hello, World!", NULL };
  execvp("echo", execArgs);

  return 0;
}

int main(int argc, char *argv[]){
	
	char *command = argv[1];
	char *parameters[argc];
	
	int i;
	for (i = 0; i < argc-1; i++){
		parameters[i] = argv[i+1];
	}
	//parameters[] = NULL;

	for (i = 0; i < argc-2; i++){
		printf("%s\n", parameters[i]);
	}
	if (parameters[argc-1] == NULL){
		printf("Success!");
	}
	else{
		return -1;
	}

	if (fork() != 0){
		/* Parent code. */
		printf("Parent!\n");
		//waidpid(-1, &status, 0);
	}
	else {
		/* Child code. */
		printf("Child!\n");
		//char *mine[] = {"ls", "../", NULL};
		execvp(command, parameters);
	}
	
	return 0;
}


// getrusage()