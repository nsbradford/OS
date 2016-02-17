/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu)
 *
 */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <sys/time.h>
#include <stdlib.h>
#include <assert.h>
#include <float.h>
#include <limits.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define DEBUG false

#define N_PLANES 25
#define N_PLANE_BUFFER (N_PLANES)
#define N_RUNWAYS 3

#define T_START_MIN 1
#define T_START_RANGE 1
#define T_DESCEND_MIN 1
#define T_DESCEND_RANGE 1
#define T_LAND_MIN 1
#define T_LAND_RANGE 1
#define N_FUEL_MIN 100
#define N_FUEL_RANGE 100
#define P_IS_EMERGENCY 0.0

#define FUEL_RATE 0
#define FUEL_DANGER_ZONE ((T_DESCEND_MIN + T_LAND_MIN) * FUEL_RATE)

typedef enum {FLYING, ARRIVING, DESCENDING, LANDING, CLEARED, GHOST} PlaneState;

typedef struct plane {
	unsigned int id;
	unsigned int t_start;
	unsigned int t_descend;
	unsigned int t_land;
	unsigned int maxfuel;
	double n_fuel;
	unsigned int fuel_rate;
	bool is_emergency;
	PlaneState state;
	unsigned int target_runway;
	struct timeval *start_time;
	struct timeval *tmp_time;
} Plane;

// buffers
Plane *PLANE_BUFFER[N_PLANE_BUFFER];	// buffer for arriving planes
Plane *RUNWAY_BUFFER[N_RUNWAYS];		// track which plane is in which runway
Plane null_plane;						// GHOST buffer placeholder plane
Plane *NULL_PLANE;						// pointer to GHOST buffer placeholder plane
unsigned int BUFFER_COUNT;				// number of planes in PLANE_BUFFER

// semaphores
sem_t *SEM_IN_OUT;			// limits insert() or remove() to 1 thread & RUNWAY_BUFFER
sem_t *SEM_BUFFER;			// locks the buffer within an insert() or remove()
sem_t *SEM_WAIT_DONE;		// signals a CLEARED plane
sem_t *FREE_RUNWAY;			// set to N_RUNWAYS
//sem_t *SEM_EMERGENCY;		// flag for an active emergency on a runway
sem_t *SEM_PRINT;			// lets print_buffer() can be done  semi-atomically

// turnstiles for reusable barrier
sem_t *TURN_1;				// turnstile 1 (for reusable barrier)
sem_t *TURN_2;				// turnstile 2 (for reusable barrier)
sem_t *SEM_TURN_COUNT;		// locks TURN_COUNT
unsigned int TURN_COUNT;	// count planes passing through turnstiles

// functions
void plane_function(void *ptr);
// only need these for debugging purposes
void print_plane(Plane p);
void print_all_planes(Plane *buffer[], unsigned int len);
void sort_plane_buffer(Plane *buffer[], unsigned int len);

#endif
