#include "utils.h"
#include <string.h>

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

