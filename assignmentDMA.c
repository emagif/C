#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#define SIZE 5

int* createArray(int size) {
    int* array = NULL; 
    array = (int*)malloc(sizeof(int) * size);

    return array;
}

void initArray(int* array, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }
}

void displayArray(int* array, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }
}

int doubleArraySize(int** ptr, int size) {
    int i;
    *ptr = realloc(*ptr, 2 * size * sizeof(int));
    if(*ptr!=NULL) {
        for(i = size; i < 2 * size; i++) {
            (*ptr)[i] = 0;
        }
        return 0;
    }

    if (*ptr==NULL)
    {
        return -1;
    }
}

void freeMemory(int* ptr) {
    free(ptr);
}



int main() {
    int* ptr;

    ptr = createArray(SIZE);
    initArray(ptr, SIZE);
    displayArray(ptr, SIZE);
    printf("\n");

    int val = doubleArraySize(&ptr, SIZE);

    initArray(ptr, SIZE);
    displayArray(ptr, SIZE);
    freeMemory(ptr);

    return 0;
}