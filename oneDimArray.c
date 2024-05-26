#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>




void* oneDimArray(int* oneDimArray, unsigned size) {
    int* oneDimArrayCreation; 
    oneDimArrayCreation = (int*)malloc(sizeof(int) * size);

    return oneDimArray;
}




int main() {

    int* oneDimArray = NULL; 
    int size; 

    printf("Enter size: \n");
    scanf("%d", &size);
    


    return 0;
}