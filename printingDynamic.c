#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void printArray(int* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("grades[%d] = %d\n", i, arr[i]);
    }
    printf("\n");
}



int main() {
    int* grades;
    int arraySize;

    printf("Enter the number of grades: ");
    scanf("%d", &arraySize);

    grades = (int*)malloc(sizeof(int) * arraySize);

    printArray(grades, arraySize);

    return 0;
}

// have to initialize the array, now it is empty

