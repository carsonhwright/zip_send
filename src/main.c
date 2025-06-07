#include <zlib.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"
#include "simple_z.h"

#define WRITE_DIR "/home/ubuntu/wungus/zip_send"
#define BEST_COMPRESSION 9

int main() {
	char base_fn[14] = "base_file";
	char zip_fn[12] = "zipped_file";
	char unz_fn[9] = "unz_file";
	FILE* to_be_def = make_file(base_fn);
	printf("filename passed to get_fptr: %s\n", zip_fn);
	FILE* def_to = get_fptr(zip_fn);
	FILE* unz_out = get_fptr(unz_fn);
	printf("finna zip\n");
	// here def_to is in read mode, and to_be_def is in write mode
	int zip_error = def(to_be_def, def_to, BEST_COMPRESSION);
	if (zip_error!=Z_OK){
		return 1;
	}
	// i think unz_out needs to be in write and def_to needs to be in read
	int unz_error = inf(unz_out, def_to);
	if (unz_error != Z_OK){
		return 1;
	}
	fclose(def_to);
	fclose(to_be_def);
	fclose(unz_out);

	// use zlib to zip up the file at WRITE_DIR
	
	
	//int gork_arr[3] = {1, 2, 3};
	// gork_arr = {1, 2, 3};
	//append_i(gork_arr, sizeof(gork_arr)/sizeof(gork_arr[0]), 5);
	return 0;

}
