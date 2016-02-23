/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"

//=================================================================================================
// Core functions

bool is_full(StorageDevice *device){
	assert(device->mem_used <= device->size);
	return (device->mem_used == device->size);
}

/**
 * Read from memory. Has delays built-in.
 */
uint32_t *read_mem(PTE *pte){
	assert(pte->device == RAM);
	usleep(pte->device->u_delay);
	return &pte->device->array[pte->offset];
}

/**
 * Write to memory. Has delays built-in.
 */
void write_mem(PTE *pte, uint32_t value){
	assert(pte->device == RAM);
	usleep(pte->device->u_delay);
	pte->device->array[pte->offset] = value;
}

//=================================================================================================
// Page Eviction Algorithms go here!


/**
 * Page Eviction Algorithm 1: evict a random page.
 * Evict a page, pushing it to a lower level.
 * Returns the vAddr of the evicted page.
 */
void evict_page1(StorageDevice *device){
	assert(device != HDD); 						// should never call on HDD
	assert(device->mem_used == device->size); 	// should only call if device is full

	int i;
	unsigned child_offset;
	vAddr evict_addr;

	// if we're RAM, check if SSD will have to evict
	if (device == RAM && is_full(device->child)){
		evict_page1(device->child);
	}

	// find the first empty location in the child
	for (i = 0; i < device->child->size; i++){
		if (!device->child->bitmap[i]){
			child_offset = i;
			break;
		}
	}
	
	// ***Core of the eviction algorithm: find a page mapping in the proper device to evict
	for (i = 0; i < SIZE_PT; i++){
		if (PT[i].device == device){
			evict_addr = i;
			break;
		}
	}
	// ***End core of the eviction algorithm

	uint32_t *tmp = read_mem(&PT[evict_addr]);		// store page data
	device->bitmap[PT[evict_addr].offset] = false;	// set device bitmap
	PT[evict_addr].device = device->child;			// set page new device
	PT[evict_addr].offset = child_offset;			// set page new offset
	write_mem(&PT[evict_addr], *tmp);				// write data to child
	device->child->bitmap[child_offset] = true;		// set child bitmap

	device->mem_used--;
	device->child->mem_used++;
	
	assert(device->mem_used == device->size - 1);
	assert(device->child->mem_used <= device->child->size);
}


/**
 * Page Eviction Algorithm 2
 * Evict a page, pushing it to a lower level.
 * Returns the vAddr of the evicted page.
 */
vAddr evict_page2(StorageDevice *device){
	// TODO
	return -1;
}


/**
 * Page Eviction Algorithm 2
 * Evict a page, pushing it to a lower level.
 * Returns the vAddr of the evicted page.
 */
vAddr evict_page3(StorageDevice *device){
	// TODO
	return -1;
}


//=================================================================================================
// Higher-level functions

/**
 * Guarantee that the given page is in RAM.
 */
void insert_to_RAM(PTE *pte){
	if (is_full(RAM))
		evict_page1(RAM);
	// find open slot
	int i;
	for (i = 0; i < pte->device->size; i++){
		if (!RAM->bitmap[i]){

		}
	}
}

/**
 * Guarantee that the given page is in RAM.
 */
void move_to_RAM(PTE *pte){

}

/**
 * After a free_page() call, move pages into higher layers
 */
void sift_pages_up(){
	// TODO
}


