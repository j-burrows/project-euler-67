/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	ProblemEighteen.h
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	To make a program that will find and display the highest sum of adjacent
 |				numbers in a triangle.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Author:		Jonathan Burrows
 |	Date:		November 14th 2012
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
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

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	triangle_rows
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	Finds the height of the array as if it were shaped like a pyramid.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:		array_len, 		the length of the array that is in the form of a triangle.
 |	@return:	current_row, 	the rows in the triangle.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Algorithm:	triangle rows will find the height of the array as if it were shaped like a 
 |				pyramid. Starting at zero, every entry incriments the value of the column. 
 |				Once it passes the row width, the column is set to zero, and the rows are 
 |				incrimented by one. This results in row holding the height of the array.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int triangle_rows(int array_len);
/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	find_max_sum
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	Finds the highest product of any adjacent numbers going up in a triangular 
 |				array.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:		triangle, 		an array of elements that is shaped like a triangle.
 |				array_len, 		the length of the array of elements.
 |				row, 			the height of the triangle shaped array.
 |	@return:	triangle[0], 	the top node in the array.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Algorithm:	find_max_sum finds the highest product of any adjacent numbers going up in a
 |				triangular array. Starting from the end of the second to last row, the two 
 |				elements beneath it are compared, and the larger value is added to the 
 |				presently held value. This continues until the second to last row is checked
 |				and summed into the first row. The first element of the array is returned.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int find_max_sum(int* triangle, int array_len, int row);

#endif
