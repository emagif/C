#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>


int main() {
    int* a; 
    int arraySize; 
    printf("Enter array size: ");
    scanf("%d", &arraySize);
    a = (int*)calloc(arraySize, sizeof(int));
    

    return 0;
}