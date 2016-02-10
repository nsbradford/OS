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
#define MAX_T_START 300
#define MAX_N_START_FUEL 
#define P_IS_EMERGENCY 0.1

#define T_DESCENT 10
#define T_LAND 10
#define T_CLEAR 10

typedef enum {TRAVELLING, ARRIVING, QUEUING, DESCENDING, LANDING, CLEARING} PlaneState;

typedef stuct plane{
	unsigned int t_start;
	int n_start_fuel;
	int n_fuel;
	bool is_emergency;
	PlaneState state;
} Plane;


/**
 * Initialize each plane in the buffer with a random
 * t_start, n_start_fuel, and is_emergency.
 */
void initialize_planes(Plane planes[], unsigned int l_buffer){
	int i;
	for (i = 0; i < l_buffer; i++){
		planes[i].t_start = rand() % MAX_T_START;
		planes[i].n_start_fuel = rand() % MAX_N_START_FUEL;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? true : false;
	}
}

/**
 * Helper for qsort() in sort_plane_buffer().
 */
int cmp_n_fuel(const Plane *p1, const Plane *p2){
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
	

	// begin simulation with the 25 planes
	int i;
	for (i = 0; i < N_PLANES; i++){

	}


	return 0;
}