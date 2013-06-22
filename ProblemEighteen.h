/* 	ProblemEighteen.h
 *
 *	Purpose:	To make a program that will find and display the highest sum of adjacent numbers
 *				in a triangle.
 *
 *	Author:		Jonathan Burrows
 *	Date:		November 14th 2012
 */
#ifndef PROBLEMEIGHTEEN_H
#define PROBLEMEIGHTEEN_H 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <unistd.h>
#include "FileReader.h"
#include "PrintArrays.h"
#define FILE_NAME "triangle_contents.txt"
#define sleep(x) Sleep(1000*x)

/*	triangle rows finds the height of the array as if it were shaped like a pyramid. */
int triangle_rows(int array_len);

/*	find_max_sum finds the highest product of any adjacent numbers going up in a triangular array.	*/
int find_max_sum(int* triangle, int array_len, int row);

#endif
