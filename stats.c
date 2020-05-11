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
 * @brief Implementation file for my C-programming code
 *
 * contains 8 Functions : 1)  Main()
			  2)  print_statistics()
			  3)  print_array()
			  4)  sort_array() 
			  5)  find_median()
			  6)  find_mean()                                             
			  7)  find_maximum()
			  8)  find_minimum() 
 *
 * @author Ahmed Elmashad
 * @date 11/05/2020
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations*/
	unsigned char Max;
	unsigned char Min;
	unsigned int Mean;
	unsigned char Med;
  /* Statistics and Printing Functions*/
	sort_array( test, SIZE);
	Max = find_maximum( test, SIZE);
	Min = find_minimum( test, SIZE);
	Med = find_median( test, SIZE);
	Mean = find_mean( test, SIZE);
	print_array( test, SIZE);
	print_statistics(Max, Min, Mean, Med); 
	

	}

	void print_statistics(unsigned char Max,unsigned char Min,unsigned char Mean,unsigned char Med){
	printf("\n\n the following are the data extracted from the array: \n\n Maximum: %d\n Minimum: %d\n Mean: %d\n Median: %d\n\n",Max,Min,Mean,Med);
	return;
	}
	void print_array(unsigned char *x, int s){
	printf("\n ");
	for (int i=0; i<s; i++){
	if (i%5 ==0){
	printf("\n %d", *x);
	}
	else{
	printf("\n %d", *x);
	}
	x++;
	}
	printf("\n\n");
	return;

	}
	void sort_array(unsigned char *x, int s){
	unsigned char temparray[s];
	unsigned char temp1 = *x;
	unsigned char temp2;
	temparray[0]=*x;
	for (int i = 1; i<s; i++){
	x++;	
	temp1 = *x;
	temparray[i] = *x;
	for (int j = 0; j<i; j++){
	if(temp1> temparray[j]){
	temparray[i]=temparray[j];
	temparray[j] = temp1;
	temp1 = temparray[i];
			}
		}
	}
	x=x-s+1;
	for (int i=0; i<s; i++){
	*x=temparray[i];
	x++;
	
	}
	return;
	}

	unsigned char find_median(unsigned char *x, int s){
	unsigned char Med;
	if(s%2==0){
	Med = (*(x+(s/2))+*(x+(s/2)-1))/2;
	}
	else{
	Med = *(x+(s/2));
	}
	return Med;
	}
	unsigned int find_mean(unsigned char *x, int s){
	unsigned int mean =*x;
	for (int i=0; i<s; i++){
	x++;
	mean =mean + *x;
	}	
	mean = mean/s;
	return mean;
	}
	unsigned char find_maximum(unsigned char *x, int s){
	unsigned char Max =*x;
	for (int i=1; i<s; i++){
	x++;
	if(*x > Max){
	Max =*x;
		}
	}	
	return Max;
}

	unsigned char find_minimum(unsigned char *x, int s){
	unsigned char Min =*x;
	for (int i=1; i<s; i++){
	x++;
	if(*x < Min){
	Min =*x;
		}
	}	
	return Min;
}	

