## Auhtors: Himanshu Sahay (hsahay@wpi.edu), Nicholas Bradford (nsbradford@wpi.edu)
## Start of the Makefile
all: scanner

scanner: scanner.o
	gcc -o scanner scanner.o

scanner.o: scanner.c
	gcc -Wall -c scanner.c 
	
clean:
	rm *.o
## End of the Makefile
