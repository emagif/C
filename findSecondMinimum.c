#include <stdio.h>
#include <stdlib.h>


#define SIZE 5



int returnSecondSmallest(int* arr, int size) {
    int i; 
    if(size == 1) {
        return arr[0];
    }
    for(i = 0; i < size - 1; i++) {
        if(arr[i+1] < arr[i]) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    return arr[1];
}


void printArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
    int smallest[SIZE] = {3, 1, 8, 6, 4};
    int value = returnSecondSmallest(smallest, SIZE);
    printArray(smallest, SIZE);
    printf("Second smallest value: %d\n", value);


    return 0;
}