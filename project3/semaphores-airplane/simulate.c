/*
 *
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define DEBUG true

#define N_PLANES 2
#define N_PLANE_BUFFER (N_PLANES * 2)
#define N_RUNWAYS 3

#define T_START_MIN 0
#define T_START_RANGE 300
#define T_DESCEND_MIN 20
#define T_DESCEND_RANGE 10
#define T_LAND_MIN 10
#define T_LAND_RANGE 10
#define T_CLEAR 10
#define N_FUEL_MIN 50
#define N_FUEL_RANGE 100
#define P_IS_EMERGENCY 0.1


typedef enum {FLYING, ARRIVING, QUEUING, DESCENDING, LANDING, CLEARING, GHOST} PlaneState;

typedef struct plane {
	unsigned int id;
	unsigned int t_start;
	unsigned int t_descend;
	unsigned int t_land;
	unsigned int t_clear;
	unsigned int maxfuel;
	int n_fuel;
	bool is_emergency;
	PlaneState state;
	unsigned int target_runway;
} Plane;

sem_t *SEM_BUFFER;
sem_t *SEM_RUNWAYS[N_RUNWAYS];
Plane PLANE_BUFFER[N_PLANE_BUFFER];
Plane NULL_PLANE = {UINT_MAX, UINT_MAX, UINT_MAX, INT_MAX, false, GHOST, UINT_MAX};


/**
 * Initialize each plane in the buffer with random values.
 */
void initialize_planes(Plane planes[], unsigned int len){
	int i;
	for (i = 0; i < len; i++){
		planes[i].id = i+1;
		planes[i].t_start = rand() % T_START_RANGE + T_START_MIN;
		planes[i].t_descend = rand() % T_DESCEND_RANGE + T_DESCEND_MIN;
		planes[i].t_land = rand() % T_LAND_RANGE + T_LAND_MIN;
		planes[i].t_clear = T_CLEAR;
		planes[i].maxfuel = rand() % N_FUEL_RANGE + N_FUEL_MIN;
		planes[i].n_fuel = planes[i].maxfuel;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? false : true;
		planes[i].state = FLYING;
		planes[i].target_runway = (int)NULL;
	}
}

/**
 * Print out the stats for each plane; handles "GHOST" planes in the buffer as well.
 */
void print_plane(Plane p){
	switch (p.state){
		case FLYING:
			printf("FLYING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
			break;
		case ARRIVING:
			printf("ARRIVING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
			break;
		case QUEUING:
			printf("QUEUING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
			break;
		case DESCENDING:
			printf("DESCENDING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case LANDING:
			printf("LANDING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case CLEARING:
			printf("CLEARING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case GHOST:
			printf("GHOST\n");
			break;
		default:
			printf("ERROR in print_plane() switch.\n");
			break;
	}	
}

/**
 * Call print_plane() for each Plane in a buffer.
 */
void print_all_planes(Plane planes[], unsigned int len){
	int i;
	for (i = 0; i < len; i++){
		print_plane(planes[i]);
	}
}




void plane_crash(){
	
}

void check_danger(){

}

void insert_plane_in_queue(){

}

void plane_function(void *ptr){
	Plane *plane;
	plane = (Plane *)ptr;
	assert (plane->state == FLYING);
	
	pthread_exit(0);

	// Wait to arrive
	//sleep(plane->t_start);

	// 1: ARRIVING
	plane->state = ARRIVING;
	print_plane(*plane);
	sem_wait(SEM_BUFFER); // wait on synchronized buffer

	// QUEUING
	plane->state = QUEUING;
	insert_plane_in_queue(plane, PLANE_BUFFER);
	sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);
	sem_post(SEM_BUFFER);
	//	if is_front_of_queue(plane, buffer) && :
	//		wait on
	//

	// 2: DESCENDING
	plane->state = DESCENDING;
	print_plane(*plane);
	sleep(plane->t_descend);

	// 3: LANDING
	plane->state = LANDING;
	print_plane(*plane);
	sleep(plane->t_land);

	// 4: CLEARING
	plane->state = CLEARING;
	print_plane(*plane);
	sleep(plane->t_clear);

	// All done
	pthread_exit(0);
}


/**
 * Helper for qsort() in sort_plane_buffer().
 * Inputs a and b are pointers to planes.
 */
int cmp_n_fuel(const void *a, const void *b){
	Plane *p1 = (Plane *)a;
	Plane *p2 = (Plane *)b;
	// return 0 if equal fuel, (+) if p1 has more, (-) if p2 has more
	if (p1->state == GHOST && p2->state != GHOST)
		return 1;
	else if (p1->state != GHOST && p2->state == GHOST)
		return -1;
	else if (p1->state == GHOST && p2->state == GHOST)
		return 0;
	else {
		return p1->n_fuel - p2->n_fuel; 
	}
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
	srand(7);

	printf("\n------------------------------\nInitialize semaphores...\n");
	SEM_BUFFER = (sem_t *)malloc(sizeof(sem_t));
	sem_init(SEM_BUFFER, 0, 1); // only 1 thread can access at a time
	for (i = 0; i < N_RUNWAYS; i++){
		SEM_RUNWAYS[i] = (sem_t *)malloc(sizeof(sem_t) * N_RUNWAYS);
		sem_init(SEM_RUNWAYS[i], 0, 1); // only 1 thread can access at a time
	}
	for (i = 0; i < N_PLANE_BUFFER; i++){
		PLANE_BUFFER[i] = NULL_PLANE;
	}

	printf("\n------------------------------\nInitialize planes...\n");
	Plane planes[N_PLANES];
	initialize_planes(planes, N_PLANES);
	print_all_planes(planes, N_PLANES);

	// Test that sorting works
	//printf("Test sort by n_fuel...\n");
	//sort_plane_buffer(planes, N_PLANES);
	//print_all_planes(planes, N_PLANES);
	
	// Test that sorting works will NULL
	//printf("Test sort by n_fuel and NULL...\n");
	//PLANE_BUFFER[2] = planes[0];
	//PLANE_BUFFER[3] = planes[1];
	//sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);
	//print_all_planes(PLANE_BUFFER, N_PLANE_BUFFER);

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

	sem_destroy(SEM_BUFFER); // deallocate semaphore
	return 0;
}