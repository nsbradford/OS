/**
 * test.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"
#include <pthread.h>

/**
 * multithreaded_helper()
 *
 */
void multithreaded_helper(int *threadID){
	int i;

	for (i=0; i<1; i++){
		
		int address = rand()%1000;
		uint32_t *val = get_value(address);
		if (val){
			uint32_t myrand = (*val + rand()) %1000+1000;
			store_value(address, &myrand);
		}
		
	}
}

/**
 * test_multithreaded()
 * Test the program with 5 threads
 */
void test_multithreaded(){
	printf("\n------------------------------\ntest_multithreaded() 5 threads\n");

	int THREADNUM = 2;

	pthread_t threads[THREADNUM];
	vAddr indexes[100];
	int i;

	// indexes
	for (i = 0; i < 100; ++i) {
		if (DEBUG) 
			printf("Page %d is being created\n",i);
		
		indexes[i] = create_page();
		uint32_t *val = get_value(indexes[i]);
		if (val){
			uint32_t myrand = (*val + rand()) %1000+1000;
			store_value(indexes[i], &myrand);
		}
	}
	
	// threads
	for (i=0; i<THREADNUM; i++){
		uint32_t *thread_id = malloc(sizeof(int));
		*thread_id = i;
		pthread_create (&(threads[i]),NULL, (void *) &multithreaded_helper, thread_id);
	}

	for (i = 0; i < THREADNUM; i++){
		pthread_join(threads[i], NULL);
	}
	printf("\n------------------------------\nTest testRAM SUCCESS!\n");
}


/**
 * testRAM();
 * This function puts everything into RAM and then successfully takes it out.
 */
void testRAM(){
	printf("\n------------------------------\nTest testRAM()...\n");
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
	int i;
	for (i = 3; i <= 3; i++){
		EVICT_ALGO_NUMBER = i;
		//testRAM();
		memoryMaxer();
	}
	return 0;
	EVICT_ALGO_NUMBER = 2;
	test_multithreaded();
	return 0;
}
