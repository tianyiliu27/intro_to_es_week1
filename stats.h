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
 * @file stats.h
 * @brief Week 1 assessments
 *
 * Description : Functions declaration for basic statistic functions 
 *
 * @author Tianyi
 * @date Tianyi LIU 
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Print median, maximum, mean, and min of a given array
 *
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 */
void print_statistics( unsigned char *ptr, unsigned int length );

/**
 * @brief Print the array 
 * 
 * The function print the array with 8 element per line
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 */
void print_array(unsigned char *ptr, unsigned int length );

/**
 * @brief Find the median of a given array
 * 
 * The function uses bubble sort from largest to smallest.
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 * @return the median of the array 
 */
float find_median( unsigned char *ptr, unsigned int length );

/**
 * @brief Find the mean of a given array
 * 
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 * @return the mean of the array 
 */
unsigned char find_mean( unsigned char *ptr, unsigned int length );

/**
 * @brief Find the max of a given array
 * 
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 * @return the max of the array 
 */
unsigned char find_max( unsigned char *ptr, unsigned int length );

/**
 * @brief Find the min of a given array
 * 
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 * @return the min of the array 
 */
unsigned char find_min( unsigned char *ptr, unsigned int length );

/**
 * @brief Sort the array from largest to smallest.
 * 
 * 
 * @param ptr pointer to the array 
 * @param length length of the array 
 *
 */
void sort_array( unsigned char *ptr, unsigned int length );

#endif /* __STATS_H__ */
