#include <zlib.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

#define WRITE_DIR "/home/ubuntu/wungus/zip_send/fuckin_file"


int main() {
	// define file pointer
	FILE* fptr;
	// open file pointer at WRITE_DIR
	fptr = fopen(WRITE_DIR, "w");
	char data[21] = "Fuck a white bitch!\n";
	// check that the file isn't jacked up
	if (fptr == NULL)
		printf("File is fucked\n");
	else
		printf("The file, she is-a good!\n");

	// write some bullshit to the file
	fputs(data, fptr);
	//fputs("\n", fptr);
	fclose(fptr);
	printf("Fuck. It's done.\n");
	
	// use zlib to zip up the file at WRITE_DIR
	
	
	//int gork_arr[3] = {1, 2, 3};
	// gork_arr = {1, 2, 3};
	//append_i(gork_arr, sizeof(gork_arr)/sizeof(gork_arr[0]), 5);
	return 0;

}
