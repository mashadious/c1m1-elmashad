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
 * @brief Header file for my C-programming code
 *
 * includes declerations and documentation for the functions from the stats.c file
 *
 * @author Ahmed Elmashad
 * @date 11/05/2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

	void print_statistics(unsigned char Max,unsigned char Min,unsigned char Mean,unsigned char Med);
	void print_array(unsigned char *x, int s);
	void sort_array(unsigned char *x, int s);
	unsigned char find_median(unsigned char *x, int s);
	unsigned char find_mean(unsigned char *x, int s);
	unsigned char find_maximum(unsigned char *x, int s);
	unsigned char find_minimum(unsigned char *x, int s);
/*
*Functions:

		*****************************************************************
		*Name : Main()							*
		*Type : Void							*	
		*Description : Contains the main executing code			*
		*Input Parameters : None					*	
		*Output Parameters: Returns 0 					*
		*****************************************************************
		*Name : print_statistics()                                      *
                *Type : Void                                                    *
                *Description : Prints the statistics including Max, Min, Mean,  *
		*	       Median			                        *
                *Input Parameters : Char Max; Largest Value in the array.  	*
		*		    Char Min; Smallest Value in the array.	*
		*		    Char Mean; Mean of the array.		*
		*		    Char Med; Median of the array.		*
                *Output Parameters: Returns nothing                             *
                *****************************************************************
	        *Name : print_array()	                                        *
                *Type : Void                                                    *
                *Description : Prints the array in an organised way             *
                *Input Parameters : char* x; pointer to the array		*
	        *		    int s; size of the array                    *
                *Output Parameters: Returns nothing                             *
                *****************************************************************
	        *Name : sort_array()                                  		*
                *Type : Void                                                    *
                *Description :  Sorts the array from the largest to		*
		*	        the smallest.			                *
                *Input Parameters : char* x; pointer to the array               *
                *                   int s; size of the array                    *
                *Output Parameters: Returns nothing                             *
                *****************************************************************
		*Name : find_median()                                           *
                *Type : char                                                    *
                *Description : finds the median of the array                    *
                *Input Parameters : char* x; pointer to the array		*
		*		    int s; size of the array			*
                *Output Parameters: char median; returns the median of the array*
                *****************************************************************
		*Name : find_mean()                                             *
                *Type : char                                                    *
                *Description : finds the mean of the array                      *
                *Input Parameters : char* x; pointer to the array		*
		*		    int s; size of the array                    *
                *Output Parameters: char mean; returns the mean of the array    *
                *****************************************************************
		*Name : find_maximum()                                          *
                *Type : char                                                    *
                *Description : finds the Max of the array           	        *
                *Input Parameters : char* x; pointer to the array		*
		*		    int s; size of the array                    *
                *Output Parameters: char maximum; returns the max of the array  *
                *****************************************************************
		*Name : find_minimum()                                          *
                *Type : char                                                    *
                *Description : finds the Min of the array          	        *
                *Input Parameters : char* x; pointer to the array		*
		*		    int s; size of the array                    *
                *Output Parameters: char minimum; returns the min of the array  *
                *****************************************************************

*/



#endif /* __STATS_H__ */
