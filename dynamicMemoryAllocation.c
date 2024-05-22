#include <stdio.h>
#include <stdlib.h>


int main() {
    int* a;
    int arraySize;
    printf("Enter array size: ");
    scanf("%d", &arraySize);
    a = (int*)malloc(arraySize*sizeof(int));


    return 0;
}