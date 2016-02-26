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

/**
 * multithreadedHelper()
 *
 */
void multithreadedHelper(int *threadID){
	int i;

	for (i=0; i<300; i++){
		
		int address = rand()%1000;
		uint32_t *val = get_value(address);
		*val = rand();
		store_value(address, val);
	}
}

/**
 * testMultithreaded()
 * Test the program with 5 threads
 */

void testMultithreaded(){

	pthread_t threads[5];
	vAddr indexes[1000];
	int i;

	// indexes
	for (i = 0; i < 1000; ++i) {
		if (DEBUG) 
			printf("Page %d is being created\n",i);
		
		vAddr indexes[i] = create_page();
		uint32_t *val = get_value(indexes[i]);
		*val = (i * 3);
		store_value(indexes[i], val);

	}
	
	// threads
	for(i=0; i<5; i++){
		uint32_t *thread_id = malloc(sizeof(int));
		*thread_id = i;
		pthread_create (&(threads[i]),NULL, (void *) &multithreadedHelper, thread_id);
	}
}


/**
 * testRAM();
 * This function puts everything into RAM and then successfully takes it out.
 */
void testRAM(){
	vAddr indexes[10];
	int i;
	for (i = 0; i < 10; i++){
		indexes[i] = create_page();
		uint32_t *val = get_value(indexes[i]);
		*val = (i * 3);
		store_value (indexes[i], val);
	}
	for (i = 0; i < 10; i++){
		free_page(indexes[i]);
	}
	printf("\n------------------------------\nTest testRAM SUCCESS!\n");
}

/**
 * testFullMemory()
 * This function tries to add more than 1000 pages, and shows failure to do so
 */
void testFullMemory(){
	
	vAddr indexes[1015];
	int i;

	for (i = 0; i < 1000; i++){
		indexes[i] = create_page();
		uint32_t *value = get_value(indexes[i]);
		*value = (i * 3);
		store_value (indexes[i], value);
	}

	for (i = 0; i < 1000; i++){
		indexes[i] = create_page();
		// this should fail, and return -1
		if (indexes[i] = -1){
			printf(" Failed to allocate new page in memory. 1000 pages already in memory. \n");
		}
	}
}


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
	printf("\n------------------------------\nTest memoryMaxer SUCCESS!\n");
}

/**
 * Run the multithreaded stress test.
 */
int main(){
	assertions();
	int i;
	for (i = 1; i <= 3; i++){
		EVICT_ALGO_NUMBER = i;
	
	if (DEBUG)
		printf("Testing with testRAM() --------------------\n");
	testRAM();

	if (DEBUG)
		printf("Testing with memoryMaxer() --------------------\n");
	memoryMaxer();
	
	// TODO multithreading
	// !! check if this test works for multithreading
	if (DEBUG)
		printf("Testing with testMultithreaded() --------------------\n")
	testMultithreaded();

	}
	
	return 0;
}
