/**
 * test.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"
#include <pthread.h>

/**
 * Test function. Used in a multithreaded manner during stress testing.
 */
void memoryMaxer(){
	vAddr indexes[1000];
	int i;
	for (i = 0; i < 1000; i++){
		indexes[i] = create_page();
		uint32_t *value = get_value(indexes[i]);
		*value = (i * 3);
		store_value (indexes[i], value);
	}
	for (i = 0; i < 1000; i++){
		free_page(indexes[i]);
	}
}

/**
 * Run the multithreaded stress test.
 */
int main(){
	memoryMaxer();
	
	// TODO multithreading

	return 0;
}