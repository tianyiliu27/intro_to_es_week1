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
  print_array(test, SIZE);
  printf(" \n"); 
  print_statistics(test, SIZE);
  printf(" \n"); 

  /* Sorting array */
  sort_array(test, SIZE);

  printf("\n Sorted Array : \n");
  print_array(test, SIZE);
  printf(" \n"); 
  print_statistics(test, SIZE);

  printf("\nComments : Statistic values should not changed ! \n");
}

/* Add other Implementation File Code Here */

void print_statistics( unsigned char *ptr, unsigned int length ){
  if(length == 0){
    printf("Length cannot be 0 ! \n");
    exit(-1);
  }
  printf("Statistic of the given Array : \n");
  printf("Median = %f \n",find_median(ptr,length));
  printf("Max = %d \n",find_max(ptr,length));
  printf("Mean = %d \n",find_mean(ptr,length));
  printf("Min = %d \n",find_min(ptr,length));
}

void print_array( unsigned char *ptr, unsigned int length ){

  if(length == 0){
    printf("Length cannot be 0 ! \n");
    exit(-1);
  }

  for( int i = 0 ; i < length ; i ++){
    if(i%8 == 0 && i != 0){
      printf("%d \n",ptr[i]);
      continue;
    }
    else{
      printf("%d ",ptr[i]);
    }
  }
  printf(" \n");
}

unsigned char find_mean( unsigned char *ptr, unsigned int length ){

  unsigned int total = 0;
  unsigned char average = 0; 
  unsigned int i = 0;
  if( length == 0){
    printf("Length cannot be 0 ! \n");
    exit(-1);
  }

  for( i = 0 ; i < length ; i++ ){
    total += ptr[i];

  }
  average = total/i;

  return average;
}

float find_median( unsigned char *ptr, unsigned int length ){

  float median;

  /* Sort the array */
  sort_array( ptr, length );

  if(length%2 != 0){
    median = ptr[length/2];
    return median;
  }
  else{
    median = (ptr[(length-1)/2] + ptr[length/2]) / 2; 
    return median;
  }

}
unsigned char find_max( unsigned char *ptr, unsigned int length ){

  unsigned char max = 0;
  unsigned int i = 0;
  if ( length == 0 ){
    printf("Length cannot be 0 ! \n");
    exit(-1);
  }

  max = ptr[0];

  for( i = 1 ; i < length ; i++ ){
    if( max < ptr[i]){
      max = ptr[i];
    }

  }

  return max;
}

unsigned char find_min( unsigned char *ptr, unsigned int length ){

  unsigned char min = 0;
  unsigned int i = 0;
  if ( length == 0 ){
    printf("Length cannot be 0 ! \n");
    exit(-1);
  }

  min = ptr[0];

  for ( i = 1 ; i < length ; i++ ){
    if ( min > ptr[i] ){
      min = ptr[i];
    }

  }

  return min;
}

void sort_array( unsigned char *ptr, unsigned int length ) {
    unsigned int i, j, temp;

    for ( i = 0; i < length - 1; i++ ) {
        for ( j = 0; j < length - i - 1; j++ ) {
            if ( ptr[j] < ptr[j + 1] ) {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}