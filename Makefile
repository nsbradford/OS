## Auhtors: Himanshu Sahay (hsahay@wpi.edu), Nicholas Bradford (nsbradford@wpi.edu)
## Start of the Makefile
all: runCommand shell shell2

runCommand: runCommand.o
	gcc -o runCommand runCommand.o

runCommand.o: runCommand.c
	gcc -Wall -c runCommand.c 
	
shell: shell.o
	gcc -o shell shell.o
	
shell.o: shell.c
	gcc -Wall -c shell.c 

shell2: shell2.o
	gcc -o shell2 shell2.o
	
shell2.o: shell2.c
	gcc -Wall -c shell2.c 
	
clean:
	rm *.o
## End of the Makefile
