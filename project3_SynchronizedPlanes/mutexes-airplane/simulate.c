/**
 * plane.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */


#include "header.h"


//=================================================================================================

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
		planes[i].maxfuel = rand() % N_FUEL_RANGE + N_FUEL_MIN;
		planes[i].n_fuel = planes[i].maxfuel;
		planes[i].fuel_rate = FUEL_RATE;
		planes[i].is_emergency = (float)rand()/(float)(RAND_MAX) > P_IS_EMERGENCY ? false : true;
		planes[i].state = FLYING;
		planes[i].target_runway = (int)NULL;
		planes[i].start_time = (struct timeval *)malloc(sizeof(struct timeval));
		planes[i].tmp_time = (struct timeval *)malloc(sizeof(struct timeval));
	}
}

/**
 * Initialize simulate, and start threads.
 */
int main(){
	int i;
	srand(7);

	printf("\n------------------------------\nInitialize semaphores...\n");
	
	SEM_IN_OUT = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	SEM_BUFFER = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	SEM_WAIT_DONE = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	FREE_RUNWAY = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t) * N_RUNWAYS);
	//SEM_EMERGENCY = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	SEM_PRINT = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));

	TURN_1 = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	TURN_2 = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	SEM_TURN_COUNT = (pthread_mutex_t *)malloc(sizeof(pthread_mutex_t));
	TURN_COUNT = 0;

	// set some values
	for(i=0; i < N_RUNWAYS; i++)
		lockedRunways[i] = 0; // By default, not locked

	pthread_mutex_init(SEM_IN_OUT, 0);
	pthread_mutex_init(SEM_BUFFER, 0);
	pthread_mutex_init(SEM_WAIT_DONE, 0); 			// starts at 0!
	//pthread_mutex_init(SEM_EMERGENCY, 0, 0);
	pthread_mutex_init(SEM_PRINT, 0);
	// loop to create free_runway mutexes
	int loopctr = 0;
	for( ; loopctr < N_RUNWAYS ; loopctr++)
 		pthread_mutex_init(FREE_RUNWAY+loopctr, 0);

	// turnstiles for reusable barrier
	pthread_mutex_init(TURN_1, 0);					// starts at 0! 
	pthread_mutex_init(TURN_2, 0);
	pthread_mutex_init(SEM_TURN_COUNT, 0);

	printf("\n------------------------------\nInitialize planes...\n");
	
	null_plane = (Plane){UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX, DBL_MAX, 
		UINT_MAX, false, GHOST, UINT_MAX, (struct timeval *)NULL, (struct timeval *)NULL};
	NULL_PLANE = &null_plane;
	BUFFER_COUNT = 0;
	for (i = 0; i < N_PLANE_BUFFER; i++){
		PLANE_BUFFER[i] = NULL_PLANE;
	}
	Plane planes[N_PLANES];
	initialize_planes(planes, N_PLANES);
	for (i = 0; i < N_PLANES; i++){
		print_plane(planes[i]);
	}

	// RUNWAY_BUFFER
	for (i = 0; i < N_RUNWAYS; i++){
		RUNWAY_BUFFER[i] = NULL_PLANE;
	}
	
	// Test that sorting works
	/*
	printf("Test sort by n_fuel and GHOST and is_emergency...\n");
	PLANE_BUFFER[1] = &planes[1];
	PLANE_BUFFER[2] = &planes[2];
	PLANE_BUFFER[3] = &planes[3];
	PLANE_BUFFER[4] = &planes[4];
	PLANE_BUFFER[5] = &planes[5];
	PLANE_BUFFER[6] = &planes[6];
	PLANE_BUFFER[7] = &planes[7];
	sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);
	print_all_planes(PLANE_BUFFER, N_PLANE_BUFFER);
	*/

	printf("\n------------------------------\nBegin simulation...\n");
	pthread_t threads[N_PLANES];
	for (i = 0; i < N_PLANES; i++){
		pthread_create(&threads[i], NULL, (void *)&plane_function, (void *)&planes[i]);
	}

	//if (DEBUG) printf("\n------------------------------\nJoin threads...\n");
	for (i = 0; i < N_PLANES; i++){
		pthread_join(threads[i], NULL);
	}

	printf("\n------------------------------\nSimulation finished successfully!\n*END SIMULATION*\n\n");
	return 0;
}
