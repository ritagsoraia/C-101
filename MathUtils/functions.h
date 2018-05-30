#ifndef MATH_UTILS_H
#define MATH_UTILS_H

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
double calculate_mean(double values[], unsigned int size);

/*
 * Function that calculates the mean deviation of a given array of values.
 * 
 * values: given array of values
 * size: number of elements in the array
 * 
 * returns: the calculated mean deviation
 * 
 * author: https://github.com/ritagsoraia 
 */
double calculate_mean_deviation(double values[], unsigned int size);

/*
 * Function that divides a given value by two using right shifts to
 * optimize the compilation process.
 * 
 * value: value to divide
 * divisor: multiple of two (dictates the number of shifts)
 * 
 * returns: the quocient of the division 
 * 
 * author: https://github.com/ritagsoraia
 */
double divide_by_power_of_two(double value, unsigned int divisor);

/*
 * Function that multiplies a given value by two using left shifts to
 * optimize the compilation process.
 * 
 * value: value to multiply
 * factor: multiple of two (dictates the number of shifts)
 * 
 * returns: the result of the multiplication 
 * 
 * author: https://github.com/ritagsoraia
 */
double multiply_by_power_of_two(double value, unsigned int factor);

/*
 * Function that returns the correspondent character to a given integer
 * in the ASCII table. 
 * 
 * value: value to obtain
 * 
 * returns: ASCII table character
 * 
 * author: https://github.com/ritagsoraia
 */
char int_to_char(unsigned int value);

#endif
