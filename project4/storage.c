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
 * Page Eviction Algorithm 1
 * Evict a page, pushing it to a lower level.
 * Returns the vAddr of the evicted page.
 */
void evict_page1(StorageDevice *device){
	assert(device != HDD); 						// should never call on HDD
	assert(device->mem_used == device->size); 	// should only call if device is full

	// if we're RAM, check if SSD will have to evict
	if (device == RAM && is_full(device->child)){
		evict_page1(device->child);
	}

	// find the first empty location in the child
	int i;
	for (i = 0; i < device->child->size; i++){
		if (!device->child->bitmap[i]){
			// ***Core of the eviction algorithm: evict the very first page in the device
		}
	}
	assert(device->mem_used == device->size - 1);
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
	//int i;
	//for (i = 0; i < device->size; i++){
	//	if ()
	//}
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


