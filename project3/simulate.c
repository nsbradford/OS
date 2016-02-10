/*
 *
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

#include <pthread.h>

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

void print_plane(Plane p){
	printf("id:%d\t t_start:%d\t maxfuel:%d\t is_emergency:%d\t state:%d\n", p.id, p.t_start, p.maxfuel, p.is_emergency, p.state);
}

/**
 * Initialize each plane in the buffer with a random
 * t_start, maxfuel, and is_emergency.
 */
void initialize_planes(Plane planes[], unsigned int l_buffer){
	int i;
	for (i = 0; i < l_buffer; i++){
		planes[i].id = i+1;
		planes[i].t_start = rand() % T_START_RANGE + T_START_MIN;
		planes[i].maxfuel = rand() % START_FUEL_RANGE + START_FUEL_MIN;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? true : false;
		planes[i].state = ARRIVING;
	}
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
void sort_plane_buffer(Plane buffer[], unsigned int l_buffer){
	qsort(buffer, l_buffer, sizeof(Plane), cmp_n_fuel);
}


/**
 * Initialize simulate, and start threads.
 */
int main(){
	// initialize 25 planes
	Plane plane_list[N_PLANES];
	initialize_planes(plane_list, N_PLANES);

	// begin simulation with the 25 planes
	int i;
	for (i = 0; i < N_PLANES; i++){
		print_plane(plane_list[i]);
	}


	return 0;
}