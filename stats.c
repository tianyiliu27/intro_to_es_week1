/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief Week 1 assessments
 *
 * Description : Functions declaration for basic statistic functions 
 *
 * @author Tianyi Liu
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"
#include <stdlib.h>

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

void print_statistics( unsigned char *ptr, unsigned int length ){

}

void print_array( unsigned char *ptr, unsigned int length ){

}

unsigned char find_mean( unsigned char *ptr, unsigned int length ){

}

float find_median( unsigned char *ptr, unsigned int length ){

}
unsigned char find_max( unsigned char *ptr, unsigned int length ){

}

unsigned char find_min( unsigned char *ptr, unsigned int length ){

}

void sort_array( unsigned char *ptr, unsigned int length ) {

}