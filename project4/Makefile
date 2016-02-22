## Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)

test: test.o api.o storage.o globals.o
	gcc -o test test.o api.o storage.o globals.o -lpthread

test.o: test.c header.h
	gcc -Wall -c test.c 

api.o: api.c header.h
	gcc -Wall -c api.c 

storage.o: storage.c header.h
	gcc -Wall -c storage.c

globals.o: globals.c header.h
	gcc -Wall -c globals.c

clean:
	rm *.o

##