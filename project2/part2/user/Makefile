## Auhtors: Himanshu Sahay (hsahay@wpi.edu), Nicholas Bradford (nsbradford@wpi.edu)
## Start of the Makefile
all: shift2user getloginuid

runCommand: shift2user.o
	gcc -o shift2user shift2user.o

runCommand.o: shift2user.c
	gcc -Wall -c shift2user.c 
	
shell: getloginuid.o
	gcc -o getloginuid getloginuid.o
	
shell.o: getloginuid.c
	gcc -Wall -c getloginuid.c 

clean:
	rm *.o
## End of the Makefile