/*
 *
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#include <pthread.h>
#include <semaphore.h>

#define DEBUG true

#define N_PLANES 25
#define T_START_MIN 0
#define T_START_RANGE 300
#define START_FUEL_MIN 50
#define START_FUEL_RANGE 100
#define P_IS_EMERGENCY 0.1

#define T_DESCENT 10
#define T_LAND 10
#define T_CLEAR 10

typedef enum {TRAVELLING, ARRIVING, QUEUING, DESCENDING, LANDING, CLEARING} PlaneState;

typedef struct plane{
	unsigned int id;
	unsigned int t_start;
	int maxfuel;
	int n_fuel;
	bool is_emergency;
	PlaneState state;
} Plane;

sem_t *SEM_BUFFER;


void print_plane(Plane p){
	printf("id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n", 
		p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
}


void print_all_planes(Plane planes[], unsigned int len){
	int i;
	for (i = 0; i < len; i++){
		print_plane(planes[i]);
	}
}


/**
 * Initialize each plane in the buffer with a random
 * t_start, maxfuel, and is_emergency.
 */
void initialize_planes(Plane planes[], unsigned int len){
	int i;
	for (i = 0; i < len; i++){
		planes[i].id = i+1;
		planes[i].t_start = rand() % T_START_RANGE + T_START_MIN;
		planes[i].maxfuel = rand() % START_FUEL_RANGE + START_FUEL_MIN;
		planes[i].n_fuel = planes[i].maxfuel;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? false : true;
		planes[i].state = ARRIVING;
	}
}

void plane_function(void *ptr){
	Plane *plane;
	plane = (Plane *)ptr;
	print_plane(*plane);

	pthread_exit(0);
}


/**
 * Helper for qsort() in sort_plane_buffer().
 */
int cmp_n_fuel(const void *a, const void *b){
	Plane *p1 = (Plane*)a;
	Plane *p2 = (Plane*)b;
	return p1->n_fuel - p2->n_fuel;
}


/**
 * Sorts an array of Plane structs by increasing fuel remaining.
 */
void sort_plane_buffer(Plane buffer[], unsigned int len){
	qsort(buffer, len, sizeof(Plane), cmp_n_fuel);
}


/**
 * Initialize simulate, and start threads.
 */
int main(){
	int i;
	Plane planes[N_PLANES];
	SEM_BUFFER = (sem_t *)malloc(sizeof(sem_t));
	sem_init(SEM_BUFFER, 0, 1); // only 1 thread can access at a time

	printf("\n------------------------------\nInitialize planes...\n");
	initialize_planes(planes, N_PLANES);
	print_all_planes(planes, N_PLANES);

	// Test that sorting works
	//printf("Test sort by n_fuel...\n");
	//sort_plane_buffer(planes, N_PLANES);
	//print_all_planes(planes, N_PLANES);

	// Create threads
	if (DEBUG) printf("\n------------------------------\nCreate threads...\n");
	pthread_t threads[N_PLANES];
	for (i = 0; i < N_PLANES; i++){
		pthread_create(&threads[i], NULL, (void *)&plane_function, (void *)&planes[i]);
	}

	// Wait for simulation to finish, checking if a plane crashed
	// TODO


	// If program has finished, join all threads
	//if (DEBUG) printf("\n------------------------------\nJoin threads...\n");
	for (i = 0; i < N_PLANES; i++){
		pthread_join(threads[i], NULL);
	}

	return 0;
}