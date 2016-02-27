/**
 * test.c
 * Nicholas Bradford (nsbradford@wpi.edu) and Himanshu Sahay (hsahay@wpi.edu)
 *
 */

#include "header.h"
#include <pthread.h>
#include <time.h>

/**
 * multithreadedHelper()
 *
 */
void multithreadedHelper(int *threadID){
	int i;

	for (i=0; i<300; i++){
		
		int address = rand()%1000;
		uint32_t *val = get_value(address);
		if (val){
			uint32_t myrand = (*val + rand()) %1000+1000;
			store_value(address, &myrand);
		}	
	}
}

/**
 * testMultithreaded()
 * Test the program with 5 threads
 */

void testMultithreaded(){

	pthread_t threads[2];
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
	for (i=0; i<2; i++){
		uint32_t *thread_id = malloc(sizeof(int));
		*thread_id = i;
		pthread_create (&(threads[i]),NULL, (void *) &multithreadedHelper, thread_id);
	}
}


/**
 * testFullMemory()
 * This function tries to add more than 1000 pages, and shows failure to do so
 */
void testFullMemory(){
	printf("\n------------------------------\nTest testFullMemory()...\n");	
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

	printf("\n------------------------------\nTest testFullMemory() SUCCESS!\n");
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
	printf("\n------------------------------\nTest testRAM() SUCCESS!\n");
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
	printf("\n------------------------------\nTest memoryMaxer() SUCCESS!\n");
}


/**
 * Run the stress tests.
 */
int main(int argc, char *argv[]){

	if (argc != 3){
		printf("Correct usage is ./test <test-number> <eviction-algorithm-number>\n");
		exit(0);
	}
	else {
		int choice = atoi(argv[1]);
		EVICT_ALGO_NUMBER = atoi(argv[2]);

		clock_t begin, end;

		if (choice == 1) {
			begin = clock();
			memoryMaxer();
			end = clock();

			printf("FOR EVICTION ALGORITHM %d\n", EVICT_ALGO_NUMBER);
			printf("--------Time spent on memoryMaxer() = %f s\n", (double) (end - begin)/CLOCKS_PER_SEC );
		}

		else if (choice == 2) {
			begin = clock();
			testRAM();
			end = clock();
		
			printf("FOR EVICTION ALGORITHM %d\n", EVICT_ALGO_NUMBER);
			printf("--------Time spent on testRAM() = %f s\n", (double) (end - begin)/CLOCKS_PER_SEC);
		}

		else if (choice == 3) {
			begin = clock();
			testFullMemory();		
			end = clock();

			printf("FOR EVICTION ALGORITHM %d\n", EVICT_ALGO_NUMBER);
			printf("--------Time spent on testFullMemory() = %f s\n", (double) (end - begin)/CLOCKS_PER_SEC);
		}


		else if (choice == 4){

//		This test checks multithreading. We will uncomment this in our demo, to demonstrate that it works

			begin = clock();
			testMultithreaded();
			end = clock();
			printf("FOR EVICTION ALGORITHM %d\n", EVICT_ALGO_NUMBER);
			printf("--------Time spent on testMultithreaded() = %f s\n", (double) (end - begin)/CLOCKS_PER_SEC);

		}
	return 0;
	}
}
