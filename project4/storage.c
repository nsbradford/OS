/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"

void print_device(StorageDevice *device){
	printf("DEVICE: size:%d mem_used:%d\n", device->size, device->mem_used);
}

//=================================================================================================
// Core functions

int check_bitmap_open_slots(StorageDevice *device){
	int n_open_slots = 0;
	int i;
	for (i = 0; i < device->size; i++){
		if (!device->bitmap[i])
			n_open_slots++;
	}
	if (DEBUG) printf("\t n_open_slots:%d\n", n_open_slots);
	assert(device->size - n_open_slots == device->mem_used);
	return n_open_slots;
}

bool is_full(StorageDevice *device){
	if (DEBUG) printf("\t is_full()\n");
	if (DEBUG) print_device(device);
	assert(device->mem_used <= device->size);
	check_bitmap_open_slots(device);
	return (device->mem_used == device->size);
}

/**
 * Read from memory. Has delays built-in.
 */
uint32_t *read_mem(PTE *pte){
	//assert(pte->device == RAM);
	usleep(pte->device->u_delay);
	return &pte->device->array[pte->offset];
}

/**
 * Write to memory. Has delays built-in.
 */
void write_mem(PTE *pte, uint32_t value){
	//assert(pte->device == RAM);
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
	unsigned int child_offset;
	unsigned int evict_addr;

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

/**
 * Handler for Page Eviction Algorithms
 */
void evict_page(StorageDevice *device){
	if (DEBUG) printf("ENTER evict_page()\n");
	switch(EVICT_ALGO_NUMBER){
		case 1:
			evict_page1(device);
			break;
		case 2:
			evict_page2(device);
			break;
		case 3:
			evict_page3(device);
			break;
		default:
			assert(false); // should never be default
	}
}

//=================================================================================================
// Higher-level functions

/**
 * Insert a new page into RAM with create_page()
 */
void insert_to_RAM(PTE *pte){
	if (DEBUG) printf("ENTER insert_to_RAM()\n");
	if (is_full(RAM))
		evict_page(RAM);
	assert(!is_full(RAM));
	
	int i;
	unsigned int ram_offset;
	bool flag_mem_full = true;

	// find open slot in RAM
	if (DEBUG) printf("\t find open slot in RAM\n");
	for (i = 0; i < SIZE_RAM; i++){
		if (!RAM->bitmap[i]){
			flag_mem_full = false;
			ram_offset = i;
			break;
		}
	}
	assert(!flag_mem_full);

	if (DEBUG) printf("\t assignment\n");
	// note that we never actually have to write to RAM for this
	assert(pte->present);
	pte->device = RAM;						// set page new device
	pte->offset = ram_offset;				// set page new offset
	pte->device->bitmap[ram_offset] = true;	// set child bitmap

	RAM->mem_used++;
}

/**
 * Guarantee that the given page is in RAM, move it to RAM otherwise
 * Model on a reverse of the evict() function.
 */
void move_to_RAM(PTE *pte){
	if (DEBUG) printf("ENTER insert_to_RAM()\n");
	if (pte->device == RAM){
		if (DEBUG) printf("\t already in RAM, return\n");
		return;
	}
	else{
		if (DEBUG) printf("\t not already in RAM\n");
		if (is_full(RAM)){
			if (DEBUG) printf("\t RAM is full\n");
			evict_page(RAM);
		}

		int i;
		unsigned int ram_offset;

		// find the first empty location in RAM
		for (i = 0; i < RAM->size; i++){
			if (!RAM->bitmap[i]){
				ram_offset = i;
				break;
			}
		}

		uint32_t *tmp = read_mem(pte);				// store page data
		pte->device->bitmap[pte->offset] = false;	// set device bitmap
		pte->device = RAM;							// set page new device
		pte->offset = ram_offset;					// set page new offset
		RAM->bitmap[ram_offset] = true;				// set RAM bitmap
		write_mem(pte, *tmp);						// write data to child

		pte->device->mem_used--;
		RAM->mem_used++;
		
		assert(RAM->mem_used <= RAM->size);
	}
}

/**
 * After a free_page() call, move pages into higher layers so that RAM is as full as possible.
 */
void sift_pages_up(){
	// TODO
}
