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


void swapArray(int** ptr1, int** ptr2) {
    int* temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}


int main() {
    int* arr1, *arr2;
    int sizeArray1, sizeArray2; 

    printf("Eneter size for array1: ");
    scanf("%d", &sizeArray1);
    arr1 = generateArray(sizeArray1);
    printf("Eneter size for array1: ");
    scanf("%d", &sizeArray2);

    arr2 = generateArray(sizeArray2);

    printArray(arr1, sizeArray1);


    


    return 0;
}