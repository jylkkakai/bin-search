#include <stdio.h>
#include <stdlib.h>


void print_array(int *arr, int size){

    printf("\n---\n");
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n---\n");
}

void shuffle_arr(int *arr, int size){

    int temp = 0;
    srand(time(NULL));
    for (int i = size; i > 0; i--){

        int r = rand()%i;
        temp = arr[r];
        arr[r] = arr[i - 1];
        arr[i - 1] = temp;
    }
}
void random_arr(int *arr, int size){

    for(int i = 0; i < size; i++){
        arr[i] = i;
    }
    shuffle_arr(arr, size);
}
