/**
 * plane.c
 * Nicholas Bradford (nsbradford@wpi.edu)
 *
 */


#include "header.h"


//=================================================================================================
// Printing/Helpers

/**
 * Print out the stats for each plane; handles "GHOST" planes in the buffer as well.
 */
void print_plane(Plane p){
	switch (p.state){
		case FLYING:
			printf("FLYING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%f\tis_emergency:%d\t state:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
			break;
		case ARRIVING:
			printf("ARRIVE id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%f\tis_emergency:%d\t state:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state);
			break;
		case DESCENDING:
			printf("DESCEND id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%f\tis_emergency:%d\t state:%d\t runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case LANDING:
			printf("LANDING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%f\tis_emergency:%d\t state:%d\t runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case CLEARED:
			printf("CLEARED id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%f\tis_emergency:%d\t state:%d\t runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case GHOST:
			if (DEBUG) printf("GHOST\n");
			break;
		default:
			printf("ERROR in print_plane() switch.\n");
			break;
	}
	if (p.n_fuel < FUEL_DANGER_ZONE && p.n_fuel > 0){
		printf("\tin FUEL_DANGER_ZONE!\n");
	}
}


/**
 * Print the PLANE_BUFFER.
 */
void print_buffer(){
	sem_wait(SEM_PRINT);
	printf("<-------------------------------------------------->\n");
	printf("  ---BUFFER---\n");
	int i;
	for (i = 0; i < N_PLANE_BUFFER; i++){
		print_plane(*PLANE_BUFFER[i]);
	}
	printf("</------------------------------------------------->\n");
	printf("  ---RUNWAYS---\n");
	for (i = 0; i < N_RUNWAYS; i++){
		printf("%d:", i+1);
		print_plane(*RUNWAY_BUFFER[i]);
	}
	printf("</------------------------------------------------->\n");
	sem_post(SEM_PRINT);
}

/**
 * Return true if plane is first in the buffer.
 */
bool is_next(Plane *plane){
	Plane *first = PLANE_BUFFER[0];
	return(first->id == plane->id);
}

/** 
 * Return true if a runway is free.
 * Assume that SEM_BUFFER is being held by the caller.
 */
bool is_free_runway(){
	int i;
	sem_getvalue(FREE_RUNWAY, &i);
	return (i > 0) ? true : false;
}

void update_fuel(Plane *plane){
	gettimeofday(plane->tmp_time, NULL);
	double delta = (plane->tmp_time->tv_sec - plane->start_time->tv_sec)
			+ (plane->tmp_time->tv_usec - plane->start_time->tv_usec)/1000000;
	plane->n_fuel = plane->maxfuel - (plane->fuel_rate * delta);
	if (plane->n_fuel < FUEL_DANGER_ZONE && plane->n_fuel > 0){
		print_plane(*plane);
	}
	else if (plane->n_fuel < 0){
		print_plane(*plane);
		printf("\nPlane %d has run out of fuel and CRASHED!\n*END SIMULATION*\n\n", plane->id);
		exit(-1);
	}
}

//=================================================================================================
// Sorting

/**
 * Helper for qsort() in sort_plane_buffer().
 * Inputs a and b are pointers to planes.
 * Return 0 if equal fuel, (+) if p1 has more, (-) if p2 has more
 */
int cmp_n_fuel(const void *a, const void *b){
	Plane *p1 = *(Plane **)a;
	Plane *p2 = *(Plane **)b;
	// if a=GHOST or b=EMERGENCY
	if ((p1->state == GHOST && p2->state != GHOST) || (!(p1->is_emergency) && (p2->is_emergency)))
		return 1;
	// if b=GHOST or a=EMERGENCY
	else if ((p1->state != GHOST && p2->state == GHOST) || ((p1->is_emergency) && !(p2->is_emergency)))
		return -1;
	// if both=GHOST
	else if (p1->state == GHOST && p2->state == GHOST)
		return 0;
	// includes if both are emergency
	else 
		return p1->n_fuel - p2->n_fuel; 
}

/**
 * Sorts an array of Plane structs by increasing fuel remaining.
 */
void sort_plane_buffer(Plane *buffer[], unsigned int len){
	qsort(buffer, len, sizeof(Plane*), cmp_n_fuel);
}

//=================================================================================================
// ARRIVING

/**
 * Enter airspace, insert into queue buffer, and sort.
 * IMPORTANT: assumes that SEM_IN_OUT, SEM_BUFFER, and FREE_RUNWAY are already held
 */
void plane_insert(Plane *plane){
	gettimeofday(plane->start_time, NULL); 
	update_fuel(plane);

	// 1: ARRIVING
	plane->state = ARRIVING; 
	print_plane(*plane);
	
	assert(BUFFER_COUNT < N_PLANE_BUFFER);
	PLANE_BUFFER[BUFFER_COUNT] = plane; // change the pointer
	BUFFER_COUNT++;
	
	sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);
}

//=================================================================================================
// WAIT

/** 
 * Wait until is_next() and is_freerunway(), so that the plane can plane_remove()
 * Reusable barrier solution as described in the Little Book of Semphores.
 * SEM_IN_OUT should be held by the CLEARED plane.
 */
void plane_wait(Plane *plane){
	bool flag_first = false;
	while(true){
		update_fuel(plane);
		if (DEBUG) printf(" -Plane %d: WAIT() loop.\n", plane->id);
		sem_wait(FREE_RUNWAY);				// wait for FREE_RUNWAY signal
		sem_post(FREE_RUNWAY);

		// if there's only one plane in the buffer, can skip all the turnstile business
		if (BUFFER_COUNT == 1){
			assert(is_next(plane));
			if (DEBUG) printf(" -Plane %d: plane_wait() found (BUFFER_COUNT == 1).\n", plane->id);
			break;
		}

		// SEM_BUFFER is held by the plane that just exited the runway
		if (DEBUG) printf(" -Plane %d: WAIT() TURN_1\n", plane->id);
		sem_wait(SEM_TURN_COUNT);			// lock for TURN_COUNT
		TURN_COUNT++;
		if (TURN_COUNT == BUFFER_COUNT){	// all planes have woken
			if (DEBUG) printf(" -Plane %d: WAIT() found all planes awake\n", plane->id);
			sem_wait(TURN_2);				// lock turnstile 2
			sem_post(TURN_1);				// unlock turnstile 1
		}
		sem_post(SEM_TURN_COUNT);				

		sem_wait(TURN_1);					// turnstile 1
		sem_post(TURN_1);

		// critical region here! ------------------------------------------------------
		// check to see if this plane is first
		if (DEBUG) printf(" -Plane %d: WAIT() critical region.\n", plane->id);
		if (is_next(plane)){
			if (DEBUG) printf(" -Plane %d: WAIT() found is_next()\n", plane->id);
			int val;
			if (DEBUG) sem_getvalue(FREE_RUNWAY, &val);
			if (DEBUG) printf(" -Plane %d: WAIT() FREE_RUNWAY has value %d\n", plane->id, val);
			if (DEBUG) printf(" -Plane %d: WAIT() sem_post(FREE_RUNWAY).\n", plane->id);
			sem_wait(FREE_RUNWAY);			// need to lock FREE_RUNWAY here so barrier works
			flag_first = true;
		}
		// end critical region   ------------------------------------------------------

		if (DEBUG) printf(" -Plane %d: WAIT() TURN_2\n", plane->id);
		sem_wait(SEM_TURN_COUNT);
		TURN_COUNT--;
		if (TURN_COUNT == 0){				// all planes are sleeping
			if (DEBUG) printf(" -Plane %d: WAIT() found all planes sleeping\n", plane->id);
			sem_wait(TURN_1);				// lock turnstile 1
			sem_post(TURN_2);				// unlock turnstile 2
		}
		sem_post(SEM_TURN_COUNT);	

		sem_wait(TURN_2);					// turnstile 2
		sem_post(TURN_2);

		// if first, take control of the buffer to do a remove()
		if (flag_first){
			break;
		}
		// else: go right back into the wait cycle
	}
	// ready to plane_remove()
}

//=================================================================================================
// DESCENDING/LANDING/CLEARED

/**
 * Assign plane to an open runway.
 * IMPORTANT: assumes that SEM_BUFFER is already held
 */
void runway_insert(Plane *plane){
	int i;
	for (i = 0; i < N_RUNWAYS; i++){
		if (RUNWAY_BUFFER[i]->state == GHOST){
			RUNWAY_BUFFER[i] = plane;
			plane->target_runway = i+1;
			return;
		}
	}
	assert(false); // tried inserting when there was no runway open, logic error
}

/**
 * Remove plane from runway by assigning that slot to NULL_PLANE
 * IMPORTANT: assumes that SEM_BUFFER is already held
 */
void runway_remove(Plane *plane){
	unsigned int runway = plane->target_runway - 1;
	assert(RUNWAY_BUFFER[runway]->id == plane->id);
	RUNWAY_BUFFER[runway] = NULL_PLANE;
}

/**
 * Land on an open runway.
 * IMPORTANT: assumes that SEM_BUFFER is already held
 */
void plane_remove(Plane *plane){
	assert(is_next(plane));
	BUFFER_COUNT--;
	PLANE_BUFFER[0] = NULL_PLANE;
	sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);

	// handle FREE_RUNWAY
	int val;
	if (DEBUG) sem_getvalue(FREE_RUNWAY, &val);
	if (DEBUG) printf(" -Plane %d: remove() FREE_RUNWAY has value %d\n", plane->id, val);
	if (val > 0){
		if (DEBUG) printf(" -Plane %d: remove() sem_wait(FREE_RUNWAY).\n", plane->id);
		sem_wait(FREE_RUNWAY);			// need to lock FREE_RUNWAY here so barrier works
	}

	// add to RUNWAY_BUFFER
	runway_insert(plane);
}

/**
 * Land on an open runway.
 */
void plane_descend_land(Plane *plane){

	// 2: DESCENDING
	plane->state = DESCENDING;
	update_fuel(plane);
	print_plane(*plane);
	sleep(plane->t_descend);

	// 3: LANDING
	plane->state = LANDING;
	update_fuel(plane);
	print_plane(*plane);
	sleep(plane->t_land);

	// 4: CLEARED
	plane->state = CLEARED;
	print_plane(*plane);

	sem_wait(SEM_IN_OUT);
	sem_wait(SEM_BUFFER);

	// remove from RUNWAY_BUFFER
	runway_remove(plane);
	
	int val;
	if (DEBUG) sem_getvalue(FREE_RUNWAY, &val);
	if (DEBUG) printf(" -Plane %d: descend_land() FREE_RUNWAY has value %d\n", plane->id, val);
	if (DEBUG) printf(" -Plane %d: sem_post(FREE_RUNWAY).\n", plane->id);
	sem_post(FREE_RUNWAY);			// alert the planes in the buffer to wake

	if (BUFFER_COUNT > 0){
		sem_post(SEM_BUFFER);
		if (DEBUG) printf(" -Plane %d: descend_land() sem_wait(SEM_WAIT_DONE).\n", plane->id);
		sem_wait(SEM_WAIT_DONE);	// gets unlocked by a plane which leaves the buffer
	}
	else{
		sem_post(SEM_BUFFER);
	}
	
	
	sem_post(SEM_IN_OUT);			// allow another thread to begin an insert or removal
	
	// proceed to exit
	if (DEBUG) printf(" -Plane %d: descend_land() EXIT\n", plane->id);
	if (DEBUG) print_buffer();
}

//=================================================================================================
// Primary function

/**
 * Each Plane thread runs this function.
 */
void plane_function(void *ptr){
	Plane *plane;
	plane = (Plane *)ptr;
	assert (plane->state == FLYING);
	
	sleep(plane->t_start); 		// wait to arrive
	sem_wait(SEM_IN_OUT);		// make sure no other plane is being inserted or removed
	sem_wait(SEM_BUFFER); 		// wait on synchronized buffer
	plane_insert(plane);		// insert into buffer and sort
	
	//sem_post(SEM_BUFFER);
	//pthread_exit(0);
	if (DEBUG) printf(" -Plane %d: finished insert()\n", plane->id);
	if (DEBUG) print_buffer();

	// if we're not first, wait
	if ( !(is_next(plane) && is_free_runway()) ){
		sem_post(SEM_BUFFER);
		sem_post(SEM_IN_OUT);
		plane_wait(plane);		// wait on is_first() and FREE_RUNWAY in a loop with turnstiles 
		if (DEBUG) printf(" -Plane %d: plane_function:if: try to acquire SEM_BUFFER.\n", plane->id);
		sem_wait(SEM_BUFFER);	// while SEM_IN_OUT is held by exiting plane, get ahold of buffer
		if (DEBUG) printf(" -Plane %d: plane_function:if: acquired SEM_BUFFER.\n", plane->id);
		sem_post(SEM_WAIT_DONE);	// tell the plane that left the runway that we're all set
	}

	// holding SEM_BUFFER here
	plane_remove(plane);
	if (DEBUG) printf(" -Plane %d: finished remove()\n", plane->id);
	if (DEBUG) print_buffer();
	sem_post(SEM_BUFFER);
	sem_post(SEM_IN_OUT);
	plane_descend_land(plane);
	pthread_exit(0);			// all done
}
