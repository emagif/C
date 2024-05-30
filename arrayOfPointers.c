#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



int main() {
    int* arr[5];
    int i; 
    for(i = 0; i < 5; i++) {
        arr[i] = (int*)calloc(3, sizeof(int));
    }
    arr[1][1] = 30;


    return 0;
}