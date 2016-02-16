/**
 * plane.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
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
	
	// buffer
	SEM_BUFFER = (sem_t *)malloc(sizeof(sem_t));
	sem_init(SEM_BUFFER, 0, 1);
	//for (i = 0; i < N_RUNWAYS; i++){
	//	SEM_RUNWAYS[i] = (sem_t *)malloc(sizeof(sem_t));
	//	sem_init(SEM_RUNWAYS[i], 0, 1);
	//}

	// turnstiles
	SEM_IN_OUT = (sem_t *)malloc(sizeof(sem_t));
	SEM_WAIT_DONE = (sem_t *)malloc(sizeof(sem_t));
	TURN_1 = (sem_t *)malloc(sizeof(sem_t));
	TURN_2 = (sem_t *)malloc(sizeof(sem_t));
	FREE_RUNWAY = (sem_t *)malloc(sizeof(sem_t));
	SEM_TURN_COUNT = (sem_t *)malloc(sizeof(sem_t));
	TURN_COUNT = 0;
	sem_init(SEM_IN_OUT, 0, 1);
	sem_init(SEM_WAIT_DONE, 0, 0); // the only semaphore which starts at 0!
	sem_init(TURN_1, 0, 1);
	sem_init(TURN_2, 0, 1);
	sem_init(FREE_RUNWAY, 0, 1);
	sem_init(SEM_TURN_COUNT, 0, 1);

	printf("\n------------------------------\nInitialize planes...\n");
	
	null_plane = (Plane){UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX, UINT_MAX, DBL_MAX, 
		UINT_MAX, false, GHOST, UINT_MAX, (struct timeval *)NULL, (struct timeval *)NULL};
	NULL_PLANE = &null_plane;
	BUFFER_COUNT = 0;
	for (i = 0; i < N_PLANE_BUFFER; i++){
		PLANE_BUFFER[i] = (Plane *)malloc(sizeof(Plane));
		PLANE_BUFFER[i] = NULL_PLANE;
	}
	Plane planes[N_PLANES];
	initialize_planes(planes, N_PLANES);
	for (i = 0; i < N_PLANES; i++){
		print_plane(planes[i]);
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

	printf("\n------------------------------\nCreate threads...\n");
	pthread_t threads[N_PLANES];
	for (i = 0; i < N_PLANES; i++){
		pthread_create(&threads[i], NULL, (void *)&plane_function, (void *)&planes[i]);
	}

	//if (DEBUG) printf("\n------------------------------\nJoin threads...\n");
	for (i = 0; i < N_PLANES; i++){
		pthread_join(threads[i], NULL);
	}

	return 0;
}
