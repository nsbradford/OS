/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
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

#define N_PLANES 2
#define N_PLANE_BUFFER (N_PLANES * 2)
#define N_RUNWAYS 3

#define T_START_MIN 1
#define T_START_RANGE 5
#define T_DESCEND_MIN 5
#define T_DESCEND_RANGE 1
#define T_LAND_MIN 5
#define T_LAND_RANGE 1
#define N_FUEL_MIN 100
#define N_FUEL_RANGE 100
#define P_IS_EMERGENCY 0.0

#define FUEL_RATE 5
#define FUEL_DANGER_ZONE (T_DESCEND_MIN + T_LAND_MIN)

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

// normal semaphore stuff
sem_t *SEM_BUFFER;
//sem_t *SEM_RUNWAYS[N_RUNWAYS];
Plane *PLANE_BUFFER[N_PLANE_BUFFER];
Plane null_plane;
Plane *NULL_PLANE;
unsigned int BUFFER_COUNT;

// turnstiles
sem_t *SEM_IN_OUT;
sem_t *SEM_WAIT_DONE;
sem_t *TURN_1;
sem_t *TURN_2;
sem_t *FREE_RUNWAY;
sem_t *SEM_TURN_COUNT;
unsigned int TURN_COUNT;


void plane_function(void *ptr);
// only need these for debugging purposes
void print_plane(Plane p);
void print_all_planes(Plane *buffer[], unsigned int len);
void sort_plane_buffer(Plane *buffer[], unsigned int len);

#endif
