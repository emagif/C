#include <stdio.h>
#include <stdlib.h>

#define SIZE 5


void swap(int* num1, int* num2) {
    int temp; 
    temp = *num1; 
    *num1 = *num2; 
    *num2 = temp;
}

void swapArray(int* arr1, int* arr2, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        swap(&arr1[i], &arr2[i]);
    }
    printf("\n");
}

void printArray(int* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int* generateArray(int size) {
    int i;
    int* arr;
    arr = (int)malloc(size*sizeof(int));
    for(i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    return arr;
}


int main() {
    int array1[SIZE] = {1, 2, 3, 4, 5};
    int array2[SIZE] = {6, 7, 8, 9, 0};

    swapArray(array1, array2, SIZE);
    printArray(array1, SIZE);


    return 0;
}