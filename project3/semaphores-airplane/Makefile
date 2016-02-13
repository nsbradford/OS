##
simulate: simulate.o plane.o
	gcc -o simulate simulate.o plane.o -lpthread

simulate.o: simulate.c header.h
	gcc -Wall -c simulate.c 

plane.o: plane.c header.h
	gcc -Wall -c plane.c

clean:
	rm *.o

##