/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	ProblemEighteen.c
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
#include "ProblemEighteen.h"

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	triangle_rows
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int triangle_rows(int array_len){
	int current_row, current_col;
	int i;
	current_row = 1;
	current_col = 0;
	
	for(i=1;i<=array_len;i++){
		current_col++;
		if(current_col > current_row){
			current_col = 1;
			current_row++;
		}
	}
	return current_row;
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	find_max_sum
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int find_max_sum(int* triangle, int array_len, int row){
	int position, end_of_row_pointer;
	
	/* 	Sets the row end pointer to the second to last row.	*/
	end_of_row_pointer = array_len - 1;
	end_of_row_pointer -= row;
	row--;
	
	/*	Every row besides last is worked on, where every element is compared to the nodes below it.	*/
	while(row >= 1){
		for(position = end_of_row_pointer; position > end_of_row_pointer - row; position--){
			/*	The higher value of the two nodes is added to the node on top.*/
			if(triangle[position + row] > triangle[position + row + 1]){
				triangle[position] += triangle[position + row];
			}
			else{
				triangle[position] += triangle[position + row+1];
			}
		}
		/*	The end of row pointer is set to the next rows last index, and the row is decrimented.	*/
		end_of_row_pointer -= row;
		row--;
	}
	return triangle[0];
}

/*
 *	This program will read a file, put the contents into an integer array, then find the highest possible sum of
 *	adjacent numbers on an upwards path. It will wait for five seconds, then proceed to exit.
 */
int main(){
	/*	Used for storing the triangular array.	*/
	int* triangle_array, triangle_array_len, rows, largest_sum;
	/*	Counts down the program after completion.	*/
	int countdown;
	
	fprintf(stdout,"\nThis program will find the upward path against a triangular array, stored in the file %s," 
				" that results in the highest summation of numbers crossed. It will then proceed to exit.\n\n\n", FILE_NAME);
	
	/*	Stores the the information from a file in an array, and gets the dimensions of that triangular array.	*/
	triangle_array = file_to_array(FILE_NAME, &triangle_array_len);
	rows = triangle_rows(triangle_array_len);
	/*	Proceeds to find the maximum sum.	*/
	largest_sum = find_max_sum(triangle_array, triangle_array_len, rows);
	
	fprintf(stdout, "\nThe largest sum of numbers found was:\t%d\n", largest_sum);
	
	/*	Counts down the program and exits after five seconds.	*/
	fprintf(stdout, "\n\n\nProgram will exit in ");
	for(countdown = 5; countdown > 0; countdown--){
		fprintf(stdout, "%d...",countdown);
		sleep(1);
	}
	return 0;
}
