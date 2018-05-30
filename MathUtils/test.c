#include <stdio.h>
#include "functions.h"

#define SIZE 6

int main(void){
	printf("----------- TEST CALCULATE MEAN -----------\n\n");

	double values[] = {1, 2, 3, 4, -1, 5};
	printf("input values:");
	
	int i;
	for(i = 0; i < SIZE; i++){
		if(i != SIZE - 1){
			printf(" %d,", (int) values[i]);
		} else {
			printf(" %d", (int) values[i]);
		}
	}

	printf("\n\n");

	double mean = calculate_mean(values, SIZE);	
	printf("expected mean » 2.333333...\n");
	printf("calculated mean » %f\n", mean);

	return 0;
}
