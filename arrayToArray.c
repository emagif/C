#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void pointerArray(int** p, int size) {

    int i;
    *p = (int*)malloc(sizeof(int) * size);
    for(i = 0; i < size; i++) {
        printf("Enter value: ");
        scanf("%d", &(*p)[i]);
    }

}



int main() {
    int size;
    int* ptr; 

    printf("Enter the desired size of the array: ");
    scanf("%d", &size);

    pointerArray(&ptr, size);


    return 0;
}