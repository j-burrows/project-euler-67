/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	PrintArrays.c
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
#include "PrintArrays.h"

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	printarray
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void printarray(int* array, int array_len){
	int i;
	fprintf(stdout, "\n");
	for(i=0;i<array_len;i++){
		fprintf(stdout, "%d\t",array[i]);
	}
	fprintf(stdout, "\n");
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	printarray_two
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void printarray_two(int** array, int row_len, int col_len){
	int row, col;
	for(col=0;col<col_len;col++){
		fprintf(stdout, "\n");
		for(row=0;row<row_len;row++){
			fprintf(stdout, "%d\t",array[row][col]);
		}
	}
	fprintf(stdout, "\n");
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	printarray_char
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void printarray_char(char* array, int array_len){
	int i;
	fprintf(stdout, "\n");
	for(i=0;i<array_len;i++){
		fprintf(stdout, "%c\t",array[i]);
	}
	fprintf(stdout, "\n");
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	printarray_char_two
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void printarray_char_two(char** array, int row_len, int col_len){
	int row, col;
	
	for(col=0;col<col_len;col++){
		fprintf(stdout, "\n");
		for(row=0;row<row_len;row++){
			fprintf(stdout,"%c\t",array[row][col]);
		}
	}
	fprintf(stdout, "\n");
}
