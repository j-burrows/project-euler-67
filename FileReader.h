 /*FileReader.h
 
Purpose: Provides functions to read a file
	of unknown length, and store any contents
	in an array of a certain type.

Author: Jonathan Burrows
Date: November 2nd, 2012
*/
#ifndef FILE_READER_H
#define FILE_READER_H 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* file_info updates the number of characters in the 
 * given file, and how many entries are stored.*/
void file_info(char*, int*, int*);

/* file_info updates the number of characters in the 
 * given file, and how many entries are stored.*/
void file_info_char(char*, int*, int*);

/* file_to_array reads a file and returns its integer
 * contents in an integer array.*/
int* file_to_array(char*,int*);

/* file_to_array reads a file and returns its character
 * contents in an character array.*/
int* file_to_array_char(char*,int*);

#endif
