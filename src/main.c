#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>

#define WRITE_DIR "/home/ubuntu/wungus/zip_send/fuckin_file"

int main() {
	// define file pointer
	FILE* fptr;
	// open file pointer at WRITE_DIR
	fptr = fopen(WRITE_DIR, "w");
	
	// check that the file isn't jacked up
	if (fptr == NULL)
		printf("File is fucked\n");
	else
		printf("The file, she is-a good!\n");
	fclose(fptr);		
	printf("Fuck.\n");
	return 0;

}
