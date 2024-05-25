#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> 


void enterSize(int* value) {
    printf("Enter a value: ");
    scanf("%d", value);
}


int* createAndFillArray(unsigned size) {
    int i;
    int* createdArray;
    createdArray = (int*)malloc(sizeof(int) * size);

    for(i = 0; i < size; i++) {
        printf("Fill the array: \n");
        scanf("%d", &createdArray[i]);
    }

    if(createdArray == NULL) {
        printf("Something went wrong :(");
        exit(1);
    }


    return createdArray;
}

void printArray(int* printedArray, unsigned size) {
    int i; 
    printf("Printed array: \n");
    for(i = 0; i < size; i++) {
        printf(" %d ", printedArray[i]);
    }
}


int main() {
    int* createdArray;
    int size;
    enterSize(&size);
    createdArray = createAndFillArray(size);
    printArray(createdArray, size);

    return 0;
}