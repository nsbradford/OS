## Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)

test: test.o api.o storage.o
	gcc -o test test.o api.o storage.o -lpthread

test.o: test.c header.h
	gcc -Wall -c test.c 

api.o: api.c header.h
	gcc -Wall -c api.c 

storage.o: storage.c header.h
	gcc -Wall -c storage.c

clean:
	rm *.o

##