#ifndef HEADER_H
#define HEADER_H

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

#define N_PLANES 25
#define N_PLANE_BUFFER (N_PLANES * 2)
#define N_RUNWAYS 3

#define FUEL_RATE 5
#define T_START_MIN 1
#define T_START_RANGE 10
#define T_DESCEND_MIN 20
#define T_DESCEND_RANGE 10
#define T_LAND_MIN 10
#define T_LAND_RANGE 10
#define T_CLEAR 10
#define N_FUEL_MIN 50
#define N_FUEL_RANGE 100
#define P_IS_EMERGENCY 0.1

typedef enum {FLYING, ARRIVING, DESCENDING, LANDING, CLEARED, GHOST} PlaneState;

typedef struct plane {
	unsigned int id;
	unsigned int t_start;
	unsigned int t_descend;
	unsigned int t_land;
	unsigned int t_clear;
	unsigned int maxfuel;
	int n_fuel;
	unsigned int fuel_rate;
	bool is_emergency;
	PlaneState state;
	unsigned int target_runway;
} Plane;

sem_t *SEM_BUFFER;
sem_t *SEM_RUNWAYS[N_RUNWAYS];
Plane *PLANE_BUFFER[N_PLANE_BUFFER];
Plane null_plane;
Plane *NULL_PLANE;
unsigned int BUFFER_COUNT;

void plane_function(void *ptr);
// only need these for debugging purposes
void print_plane(Plane p);
void print_all_planes(Plane *planes[], unsigned int len);
void sort_plane_buffer(Plane *buffer[], unsigned int len);

#endif