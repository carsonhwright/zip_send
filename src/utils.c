#include "utils.h"
#include <string.h>

#define WRITE_DIR "/home/ubuntu/wungus/zip_send"


int append_i(int* arr, int size, int val){
	int temp[size+1];
	int new_idx = sizeof(temp)/sizeof(temp[0]) - 1;
	memcpy(temp, arr, size*sizeof(arr[0]));
	for (int i=0; i<size; i++){
		printf("original array %dth index: %d\n", i, arr[i]);
	}
	temp[new_idx] = val;
	printf("value appended to array: %d at index: %d\n", val, size+1);
	for (int i=0; i<size+1; i++){
		printf("new array %dth index: %d\n", i, temp[i]);
	}

	return 0;
}

FILE* make_file(char* file_name)
{
	char write_dir[50];
	printf("mem loc of make_files write_dir: %p\n", (void*)&write_dir);
	printf("delared write directory in make_file is: %s\n", WRITE_DIR); 
	strcpy(write_dir, WRITE_DIR);
	char folder_delim[] = "/";
	strcat(write_dir, folder_delim);
	strcat(write_dir, file_name);
	// define file pointer
	FILE* fptr;
	// open file pointer at WRITE_DIR
	fptr = fopen(write_dir, "w");
	// clear write_dir
	// write_dir[0] = '\0';
	char data[21] = "Fuck a white bitch!\n";
	// check that the file isn't jacked up
	if (fptr == NULL)
		printf("File is fucked\n");
	else
		printf("The file, she is-a good!\n");

	// write some bullshit to the file
	fputs(data, fptr);
	fclose(fptr);
	FILE* r_fptr;
	r_fptr = fopen(write_dir, "r");
	return r_fptr;
}

FILE* get_fptr(char* fn)
{
	printf("filename in get_ptr: %s\n", fn);
	char write_dir[50];
	printf("get_fptrs write_dir loc: %p\n", (void*)&write_dir);
	printf("declared write dir in get_fptr is: %s\n", WRITE_DIR);
        strcpy(write_dir, WRITE_DIR);
	char folder_delim[] = "/";
	strcat(write_dir, folder_delim);
	strcat(write_dir, fn);
	printf("filename %s made\n", write_dir);
	FILE* fptr;
	fptr = fopen(write_dir, "w");
	// clear write_dir
	write_dir[0] = '\0';
	if (fptr==NULL)
		printf("File is fucked\n");
	else
		printf("The file, she is-a good!\n");
	printf("gonna return the pointer\n");
	return fptr;
}
