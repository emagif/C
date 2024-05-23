#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



int main() {
    int* a; 
    int arraySize; 
    scanf("%d", &arraySize);
    a = (int*)calloc(arraySize, sizeof(int));
    free(a);

    return 0;
}