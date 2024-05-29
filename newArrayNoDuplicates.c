#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>




int* noDuplicates(int* ptr, int size) {
    int i, j;
    int count = 1;
    int* noDuplexArray;

    for(i = 0; i < size - 1; i++) {
        if(ptr[i]!=ptr[i+1]) {
            count++;
        }
    }
    noDuplexArray = (int*)malloc(sizeof(int) * count);
    for(i = 0; i < size - 1; i++) {
        if(ptr[i]!=ptr[i]) {
            noDuplexArray[i] = ptr[i];
        }
    }
}



int main() {
    int originalArray[] = {1, 3, 3, 5, 6, 7, 7, 7, 8, 12, 12};

    return 0;
}