#include "utils.h"
#include <string.h>

int append_i(int* arr, int size, int val){
	int temp[size];
	memcpy(arr, temp, size);
	for (int i=0; i<size; i++){
		printf("%d", arr[i]);
	}
	return 0;
}

