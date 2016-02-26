/**
 * test.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"
#include <pthread.h>

void assertions(){
	assert(RAM->size == 25);
	assert(SSD->size == 100);
	assert(HDD->size == 1000);
}


void testRAM(){
	printf("\n------------------------------\nTest testRAM()...\n");
	vAddr indexes[10];
	int i;
	for (i = 0; i < 10; i++){
		indexes[i] = create_page();
		uint32_t *value = get_value(indexes[i]);
		*value = (i * 3);
		store_value (indexes[i], value);
	}
	for (i = 0; i < 10; i++){
		free_page(indexes[i]);
	}
	printf("\n------------------------------\nTest testRAM SUCCESS!\n");
}

/**
 * Test function. Used in a multithreaded manner during stress testing.
 */
void memoryMaxer(){
	printf("\n------------------------------\nTest memoryMaxer()...\n");
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
	printf("\n------------------------------\nTest memoryMaxer SUCCESS!\n");
}

/**
 * Run the multithreaded stress test.
 */
int main(){
	assertions();
	//testRAM();
	memoryMaxer();
	
	// TODO multithreading

	return 0;
}
