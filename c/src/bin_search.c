#include <stdio.h>

int bin_search(int *arr, int size, int item) {

	int item_found = 0;
	int left = 0;
	int right = size - 1;
	int iter_num = 0;
	int position = 0;
	printf("\nbin_search %d\n", item);
	
  	while(!item_found && iter_num <= size + 5){
 
 		iter_num++;
 		int middle = left + (right - left)/2;
 		printf("----- #%d\nLeft: %d Middle: %d Right: %d Value: %d\n", iter_num,left, middle,right, arr[middle]);
 		if(arr[middle] == item){
 			item_found = 1;
 			position = middle;
 		}
 		else if(left >= right){
 			item_found = 1;
 			position = -1;
 		}
 		else if(arr[middle] < item){
 			left = middle + 1;
 		}
 		else{
 			right = middle - 1;
 		}
//		item_found = 1;
	}
	if(position < 0){
		printf("Item not in the array!\n");
	}
	else{
		printf("Item found in the position %d\n", position);
	}
	return position;
}
