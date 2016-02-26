/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h> 	// uint32_t
#include <assert.h>		// assert()
#include <unistd.h>		// usleep()
#include <stdlib.h>		// rand
#include <semaphore.h>	// mutexes and conditional variables
 #include <pthread.h>

#define DEBUG true


#define SIZE_PT 1000
#define SIZE_RAM 25
#define SIZE_SSD 100
#define SIZE_HDD 1000
#define DELAY_RAM 1
#define DELAY_SSD 2
#define DELAY_HDD 3

// do this only for real testing
//#define DELAY_RAM 10000
//#define DELAY_SSD 100000
//#define DELAY_HDD 2500000

typedef signed short vAddr;

typedef struct storageDevice {
	unsigned int size;
	const unsigned int u_delay;
	unsigned int mem_used;
	bool *bitmap;
	uint32_t *array;
	struct storageDevice *child;
} StorageDevice;

typedef struct PageTableEntry {
	bool present;			// true if absent
	vAddr address;			// PT virtual address
	StorageDevice *device;	// storage device
	int offset;				// position in storage device
	bool r;					// reference bit
	pthread_mutex_t mutex;	// enable multithreading
	pthread_cond_t condvar;	// enable multithreading
} PTE;

extern unsigned int EVICT_ALGO_NUMBER;

// global storage media
PTE PT[SIZE_PT];
extern StorageDevice *RAM;
extern StorageDevice *SSD;
extern StorageDevice *HDD;
extern const PTE DEFAULT_PTE;

// API functions
vAddr create_page();
uint32_t *get_value(vAddr address);
void store_value(vAddr address, uint32_t *value);
void free_page(vAddr address);

// storage functions
void insert_to_RAM(PTE *pte);
void move_to_RAM(PTE *pte);
uint32_t *read_mem(PTE *pte);
void write_mem(PTE *pte, uint32_t value);
void sift_pages_up();

#endif
