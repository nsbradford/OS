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
#include <semaphore.h>

#define DEBUG true

#define SIZE_PT 1000
#define SIZE_RAM 25
#define SIZE_SSD 100
#define SIZE_HDD 1000

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
	bool present;			// true if present
	vAddr address;			// PT virtual address
	StorageDevice *device;	// storage device
	int offset;				// position in storage device
	// TODO need an additional member to store when last accessed
} PTE;


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

// TODO synchronization constants
//sem_t *SEM_1;

#endif
