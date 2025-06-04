#include <zlib.h>
#include <stdio.h>
#include <stdlib.h>

#define WRITE_DIR "/home/ubuntu/wungus/zip_send/fuckin_file"

int main() {
	// define file pointer
	FILE* fptr;
	// open file pointer at WRITE_DIR
	fptr = fopen(WRITE_DIR, "w");
	char data[20] = "Fuck a white bitch!";
	// check that the file isn't jacked up
	if (fptr == NULL)
		printf("File is fucked\n");
	else
		printf("The file, she is-a good!\n");

	// write some bullshit to the file
	fputs(data, fptr);
	fputs("\n", fptr);
	fclose(fptr);
	printf("Fuck. It's done.\n");
	return 0;

}
