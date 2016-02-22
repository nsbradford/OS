/**
 * header.h
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"

bool is_full(StorageDevice *device){
	assert(device->mem_used <= device->size);
	return (device->mem_used == device->size);
}

/**
 * Guarantee that the given page is in RAM.
 */
void insert_page(PTE *pte, StorageDevice *device){
	if (pte->pAddr == device)
		return;
	else{
		if (is_full(RAM))
			evict_page(RAM);
		// TODO how to figure out where the insertion address is?
	}
}

/**
 * Evict a page.
 */
vAddr evict_page(StorageDevice *device){
	return -1;
}

/**
 * If there are any gaps in the upper levels of the storage hierarchy, fill them.
 * This only needs to be called after the API free_page().
 */
void sift_pages_up(){
	// TODO
}