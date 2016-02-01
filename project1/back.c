#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	printf("CHILD: Sleeping for 3 seconds...\n");
	sleep(3);
	printf("CHILD: Woke up!\n");
	return 0;
}