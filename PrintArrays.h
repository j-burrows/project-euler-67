/*PrintArrays.h

Purpose: Provides functions that print out arrays or different
		types and dimensions.

Author: Jonathan Burrows
Date: November 2nd, 2012
*/
#ifndef PRINTARRAYS_H
#define PRINTARRAYS_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*printarray prints an integer array of a given size*/
void printarray(int*, int);

/*printarray_two prints a two dimensional integer array
 * of a certain size*/
void printarray_two(int**, int, int);

/*printarray_char prints a character array of a given size*/
void printarray_char(char*, int);

/*printarray_two prints a two dimensional character array
 * of a certain size*/
void printarray_char_two(char**, int, int);

#endif
