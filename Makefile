## Start of the Makefile
all: runCommand shell clean

runCommand: runCommand.o
	gcc -o runCommand runCommand.o

runCommand.o: runCommand.c
	gcc -Wall -c runCommand.c 
	
shell: shell.o
	gcc -o shell shell.o
	
shell.o: shell.c
	gcc -Wall -c shell.c 
	
clean:
	rm *.o
## End of the Makefile