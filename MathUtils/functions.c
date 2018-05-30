#include "functions.h"


/*
 * Function that calculates the mean of a given array of values.
 * 
 * values: given array of values
 * size: number of elements in the array
 * 
 * returns: the calculated mean 
 * 
 * author: https://github.com/ritagsoraia
 */ 
double calculate_mean(double values[], unsigned int size){
    if(size == 0) return 0;

    int i = 0, sum = 0;
    for(; i < size; i++){
        sum += values[i];
    }
    return sum / (double) size;
}
