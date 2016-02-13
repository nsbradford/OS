#include "header.h"


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
		case DESCENDING:
			printf("DESCENDING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case LANDING:
			printf("LANDING id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
				p.id, p.t_start, p.maxfuel, p.n_fuel, p.is_emergency, p.state, p.target_runway);
			break;
		case CLEARED:
			printf("CLEARED id:%d\t t_start:%d\t maxfuel:%d\t n_fuel:%d\tis_emergency:%d\t state:%d\n runway:%d\n", 
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


/**
 * Helper for qsort() in sort_plane_buffer().
 * Inputs a and b are pointers to planes.
 */
int cmp_n_fuel(const void *a, const void *b){
	Plane *p1 = (Plane *)a;
	Plane *p2 = (Plane *)b;
	// return 0 if equal fuel, (+) if p1 has more, (-) if p2 has more
	if ((p1->state == GHOST && p2->state != GHOST) || (!(p1->is_emergency) && (p2->is_emergency)))
		return 1;
	else if ((p1->state != GHOST && p2->state == GHOST) || ((p1->is_emergency) && !(p2->is_emergency)))
		return -1;
	else if (p1->state == GHOST && p2->state == GHOST)
		return 0;
	else // includes if (p1->is_emergency) && (p2->is_emergency)
		return p1->n_fuel - p2->n_fuel; 
}


/**
 *
 */
void insert_plane_in_queue(Plane buffer[], Plane *plane){

}


/**
 * Sorts an array of Plane structs by increasing fuel remaining.
 */
void sort_plane_buffer(Plane buffer[], unsigned int len){
	qsort(buffer, len, sizeof(Plane), cmp_n_fuel);
}


/**
 * Enter airspace and enter queue buffer.
 */
void plane_insert(Plane *plane){
	plane->state = ARRIVING; // 1: ARRIVING
	sem_wait(SEM_BUFFER); // wait on synchronized buffer
	print_plane(*plane);
	insert_plane_in_queue(PLANE_BUFFER, plane);
	sort_plane_buffer(PLANE_BUFFER, N_PLANE_BUFFER);
	sem_post(SEM_BUFFER);
}


/**
 * Land on an open runway.
 */
void plane_remove(Plane *plane){
	
	// TODO!

	// 2: DESCENDING
	plane->state = DESCENDING;
	print_plane(*plane);
	sleep(plane->t_descend);

	// 3: LANDING
	plane->state = LANDING;
	print_plane(*plane);
	sleep(plane->t_land);

	// 4: CLEARED
	plane->state = CLEARED;
	print_plane(*plane);
	sleep(plane->t_clear);
}


/**
 * Each Plane thread runs this function.
 */
void plane_function(void *ptr){
	Plane *plane;
	plane = (Plane *)ptr;
	assert (plane->state == FLYING);
	
	pthread_exit(0);

	sleep(plane->t_start); 		// wait to arrive
	plane_insert(plane);		// insert into buffer
	plane_remove(plane);		// remove from buffer
	pthread_exit(0);			// all done
}
