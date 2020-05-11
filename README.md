	Author: Ahmed Mohammed Fathy Elmashad
	Email:  ahmed-elmashad@hotmail.com
        Date:   11/5/2020
	Purpose:
		 1-To learn how to use terminal instead of IDE to deepen the understanding.
		 2-To get more understanding of version control and to learn how to pull and push a commit.
		 3-To review the basics of C programming.


	Description:
		
		In this code we extract data from a given array of numbers which we need to extract data from.
				
		Data needed to be extracted:	1) Minimum Number
						2) Maximum Number
						3) The Mean of the Array 
						4) The Median of the Array
						5) Order the Array from the largest number to the smallest
	Functions:

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
                *Output Parameters: Returns nothing                            *
                *****************************************************************
	        *Name : print_array()	                                        *
                *Type : Void                                                    *
                *Description : Prints the array in an organised way             *
                *Input Parameters : char* x; pointer to the array		*
		*		    int s; size of the array                    *
                *Output Parameters: Returns nothing                            *
                *****************************************************************
	        *Name : sort_array()                                  		*
                *Type : Void                                                    *
                *Description :  Sorts the array from the largest to		*
		*	        the smallest.			                *
                *Input Parameters : char* x; pointer to the array               *
                *                   int s; size of the array                    *
                *Output Parameters: Returns nothing                            *
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
                *Output Parameters: char minimum; returns the min of the array *
                *****************************************************************



