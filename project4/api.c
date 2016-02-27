/**
 * api.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"

//=================================================================================================
// Unsafe versions of the 4 API calls

/**
 * Reserves a new memory location, which is 32 bits in size. 
 * This memory block must be created in the emulated RAM, pushing other pages 
 * 		out of the emulated RAM into lower layers of the hierarchy, if needed. 
 * Returns -1 if no memory is available.
 */
vAddr UNSAFE_create_page(){
	if (DEBUG) printf(" ENTER UNSAFE_create_page()\n");

	int address = -1;

	// find an empty PTE and assign [bool present] and [vAddr address]
	int i;
	bool flag_mem_full = true;
	for (i = 0; i < SIZE_PT; i++){
		if (!PT[i].present){
			flag_mem_full = false;
			address = i;

			lock_PTE(address);

			PT[i].present = true;
			PT[i].address = address;
			pthread_mutex_init(&(PT[i].mutex), NULL);
			pthread_cond_init(&(PT[i].condvar), NULL); // TODO
			if (DEBUG) printf("\t address %d\n", address);
			break;
		}
	}
	// check to see if memory is full
	if (flag_mem_full){
		printf("Memory full, create_page() denied.\n.");
		return -1;
	}

	insert_to_RAM(&PT[address]);
	unlock_PTE(address);

	return address;
}

/**
 * This function obtains the indicated memory page from lower levels of the hierarchy,
 * 		if needed, and returns an integer pointer to the location in emulated RAM.
 * Returns NULL if the pointer cannot be provided (e.g., a page with the 
 * 		given address does not exist).
 */
uint32_t *UNSAFE_get_value(vAddr address){
	if (DEBUG) printf(" ENTER UNSAFE_get_value()\n");
	assert(address >= 0);
	if (address < SIZE_PT && PT[address].present){
		move_to_RAM(&PT[address]);
		PT[address].r = true; // set REFERENCED=true for the Second-Chance Algorithm
		return read_mem(&PT[address]);
	}
	else{
		return NULL;
	}
}

/**
 * When the user wants to update the contents of a page, the user indicates the value 
 * 		that should be stored in that page. If the page is in memory, the value is written. 
 * 		If the page is not in RAM, the page is brought into RAM, evicting other
 * 		pages as needed, before updating the page in the RAM location.
 */
void UNSAFE_store_value(vAddr address, uint32_t *value){
	if (DEBUG) printf(" ENTER UNSAFE_store_value()\n");
	assert(PT[address].present);
	move_to_RAM(&PT[address]);
	write_mem(&PT[address], *value);
}

/**
 * When the user is finally done with the memory page that has been allocated, 
 * the user can free it. This frees the page, regardless of where it is in the hierarchy.
 */
void UNSAFE_free_page(vAddr address){
	if (DEBUG) printf(" ENTER UNSAFE_free_page()\n");
	PT[address].device->bitmap[PT[address].offset] = false;
	PT[address].device->mem_used--;
	PT[address] = DEFAULT_PTE;
	//sift_pages_up(); // move pages from lower levels to fill gap
}

//=================================================================================================
// Actual API calls, using mutexes and conditional variables

/**
 * Reserves a new memory location, which is 32 bits in size. 
 * This memory block must be created in the emulated RAM, pushing other pages 
 * 		out of the emulated RAM into lower layers of the hierarchy, if needed. 
 * Returns -1 if no memory is available.
 */
vAddr create_page(){
	// handle lock_PTE and unlock_PTE within UNSAFE_create_page itself
	printf("API create_page()\n");
	return UNSAFE_create_page();
}

/**
 * This function obtains the indicated memory page from lower levels of the hierarchy,
 * 		if needed, and returns an integer pointer to the location in emulated RAM.
 * Returns NULL if the pointer cannot be provided (e.g., a page with the 
 * 		given address does not exist).
 */
uint32_t *get_value(vAddr address){
	printf("API get_value(%d)\n", address);
	uint32_t *value;
	
	lock_PTE(address);
	value = UNSAFE_get_value(address);
	unlock_PTE(address);

	return value;	
}

/**
 * When the user wants to update the contents of a page, the user indicates the value 
 * 		that should be stored in that page. If the page is in memory, the value is written. 
 * 		If the page is not in RAM, the page is brought into RAM, evicting other
 * 		pages as needed, before updating the page in the RAM location.
 */
void store_value(vAddr address, uint32_t *value){
	printf("API store_value(vAddr %d, value %d)\n", address, *value);
	lock_PTE(address);
	UNSAFE_store_value(address, value);
	unlock_PTE(address);
}

/**
 * When the user is finally done with the memory page that has been allocated, 
 * the user can free it. This frees the page, regardless of where it is in the hierarchy.
 */
void free_page(vAddr address){
	printf("API free_page(%d)\n", address);
	lock_PTE(address);
	UNSAFE_free_page(address);
	unlock_PTE(address);
}
