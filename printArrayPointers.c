#include <stdio.h>
#include <stdlib.h>

#define SIZE 5


void printArrayWithPointersForward(int* arr, int size) {
    if(size > 0) {
        printf("%d", arr[0]);
        printArrayWithPointersForward(arr + 1, size - 1);
    }
    printf("\n");
}



void printArrayWithPointersBackward(int* arr, int size) {
    if(size > 0) {
        printArrayWithPointersBackward(arr + 1, size - 1);
        printf("%d ", arr[0]);
    }
}


int main() {
    int arr[SIZE] = {1, 2, 3, 1, 4};
    printArrayWithPointersForward(arr, SIZE);

    return 0;
}