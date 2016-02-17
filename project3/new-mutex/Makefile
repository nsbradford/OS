## Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)

simulate: simulate.o plane.o
	gcc -g -o simulate simulate.o plane.o -lpthread

simulate.o: simulate.c header.h
	gcc -g -Wall -c simulate.c 

plane.o: plane.c header.h
	gcc -g -Wall -c plane.c

clean:
	rm *.o

##