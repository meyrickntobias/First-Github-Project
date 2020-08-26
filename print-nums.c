#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	This program reads in 100 random integers between 0-100
	into an array, then prints them out, one on each line,
	then prints out the average number
*/

int main(void) {
	int nums[100];
	int num;
	int sum = 0;
	int i;
	time_t t;
	
	/* Intializes random number generator */
   	srand((unsigned) time(&t));
	
	for (i = 0; i < 100; i++) {
		num = (rand() % 100) + 1;
		nums[i] = num;
		sum += num;
	}
	
	for (i = 0; i < 100; i++) {
		printf("%d\n", nums[i]);
	}
	
	printf("\n");
	printf("Average: %d\n", sum / 100);
	
	return EXIT_SUCCESS;
}
