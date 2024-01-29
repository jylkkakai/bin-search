#include <stdio.h>
#include "utils.h"
#include "bin_search.h"

int main() {

	printf("Hello World!\n");
	int size = 10;
	int arr[size];
	int *arr_p = arr;
	int pos = 0;
	for(int i = 0; i < size; i++){
		arr_p[i] = i < 5 ? i : i+2;
	}
	print_array(arr_p, size);
	for(int i = -1; i < size + 3; i++){
		pos = bin_search(arr_p, size, i);
	}

	return 0;
}
