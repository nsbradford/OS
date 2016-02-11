##
simulate: simulate.o
	gcc -o simulate simulate.o -lpthread

simulate.o: simulate.c header.h
	gcc -Wall -c simulate.c 

clean:
	rm *.o

##