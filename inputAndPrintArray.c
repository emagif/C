#include <stdio.h>
#include <stdlib.h>


void inputArray(int* arr, int size) {
    int i; 
    for (i = 0; i < size; i++) {
        printf("Enter the element: %d\n", i+1);
        scanf("%d", &arr[i]);
    }
}


void printArray(int* arr, int size) {
    int i; 
    for (i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}


int main() {
    int array[5] = {0};
    inputArray(array, sizeof(array)/sizeof(array[0]));
    printf("The array is: ");
    printArray(array, sizeof(array)/sizeof(array[0]));

    return 0;
}