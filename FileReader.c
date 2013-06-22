 /*FileReader.c*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILE_NAME "array_info.txt"

void file_info(char* file_name, int* array_len, int* buff_len){
	FILE* contents;
	char curr;
	int num_start = 1;

	*buff_len = 0;
	*array_len = 0;
	contents = fopen(file_name,"r");

	while((curr = fgetc(contents))!=EOF){
		if(curr >= '0' && curr <= '9'){
			if(num_start){
				(*array_len)++;
				num_start = 0;
			}
		}
		else{
			num_start = 1;
		}
		(*buff_len)++;
	}
	fclose(contents);
}

void file_info_char(char* file_name, int* array_len, int* buff_len){
	FILE* contents;
	char curr;
	int str_start = 1;

	*buff_len = 0;
	*array_len = 0;
	contents = fopen(file_name,"r");

	while((curr = fgetc(contents))!=EOF){
		if(curr != ' '){
			if(str_start){
				(*array_len)++;
				str_start = 0;
			}
		}
		else{
			str_start = 1;
		}
		(*buff_len)++;
	}
	fclose(contents);
}

int* file_to_array(char* file_name, int* array_len){
	FILE* contents;
	int* array, buff_len, converting;
	char* buffer, *delim, curr;
	int i;
	
	file_info(file_name,array_len,&buff_len);
	
	array = malloc((*array_len)*sizeof(int));
	buffer = malloc(buff_len*sizeof(char));
	memset(buffer,' ',buff_len);
	
	contents = fopen(file_name,"r");
	for(i=0; i < buff_len; i++){
		if((curr=fgetc(contents))==EOF){
			break;
		}
		if(curr > '9' || curr < '0'){
			curr = ' ';
		}
		buffer[i] = curr;
	}
	delim = strtok(buffer, " ");
	for(i = 0; i < (*array_len); i++){
		converting = atoi(delim);
		array[i] = converting;
		delim = strtok(NULL, " ");
	}
	free(buffer);
	return array;
}

char** file_to_array_char(char* file_name, int* array_len){
	FILE* contents;
	int buff_len;
	char** array, *buffer, *delim, curr;
	int i;
	
	file_info_char(file_name,array_len,&buff_len);
	
	array = malloc((*array_len)*sizeof(char));
	buffer = malloc(buff_len*sizeof(char));
	memset(buffer,' ',buff_len);
	
	contents = fopen(file_name,"r");
	for(i=0; i < buff_len; i++){
		if((curr=fgetc(contents))==EOF){
			break;
		}
		buffer[i] = curr;
	}
	delim = strtok(buffer, " ");
	for(i = 0; i < (*array_len); i++){
		array[i] = delim;
		delim = strtok(NULL, " ");
	}
	free(buffer);
	return array;
}
