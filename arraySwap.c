#include <stdio.h>
#include <stdlib.h>


#define SIZE 5


void swapInts(int* num1, int* num2) {
    int temp; 
    temp = *num1;
    *num1 = *num2; 
    *num2 = temp;
}

void swapArrays(int* arr1, int* arr2, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        swapInts(&arr1[i], &arr2[i]);
    }
}


void printArray(int* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}




int main() {
    int array1[SIZE] = {1, 3, 6, 8, 10};
    int array2[SIZE] = {2, 2, 4, 11, 17};

    printf("Array1 before swapping: ");
    printArray(array1, SIZE);
    printf("Array2 before swapping: ");
    printArray(array2, SIZE);

    swapArrays(array1, array2, SIZE);
    printf("Array1 after swapping: ");
    printArray(array1, SIZE);
    printf("Array2 after swapping: ");
    printArray(array2, SIZE);


    

    
    return 0;
}