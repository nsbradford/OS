/*
 *
 *
 */

#include "header.h"


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
		planes[i].fuel_rate = FUEL_RATE;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? false : true;
		planes[i].state = FLYING;
		planes[i].target_runway = (int)NULL;
	}
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

	printf("\n------------------------------\nInitialize planes...\n");
	null_plane = (Plane){UINT_MAX, UINT_MAX, UINT_MAX, INT_MAX, false, GHOST, UINT_MAX};
	NULL_PLANE = &null_plane;
	BUFFER_COUNT = 0;
	for (i = 0; i < N_PLANE_BUFFER; i++){
		PLANE_BUFFER[i] = *NULL_PLANE;
	}
	Plane planes[N_PLANES];
	initialize_planes(planes, N_PLANES);
	print_all_planes(planes, N_PLANES);

	// Test that sorting works
	//printf("Test sort by n_fuel...\n");
	//sort_plane_buffer(planes, N_PLANES);
	//print_all_planes(planes, N_PLANES);
	
	// Test that sorting works with NULL
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
