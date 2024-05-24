#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// Everytime you free the memory, you have to set pointer to NULL, because it may result in a dangling pointer

int main() {
    int* a; 
    int arraySize; 
    scanf("%d", &arraySize);

    a = (int*)malloc(sizeof(int) * arraySize);
    free(a);

    a = NULL;

    return 0;
}