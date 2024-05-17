#include <stdio.h>
#include <stdlib.h>

#define SIZE 5


int* createArray();

void printArr(int* arr, int size){
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {

    int* arr; 
    arr = createArray();

    printArr(arr, SIZE);

    return 0;
}


int* createArray() {
    int i; 
    int myArr[SIZE];
    printf("Enter %d elements to your array.\n", SIZE);
    for(i = 0; i < SIZE; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &myArr[i]);
    }
    return myArr;
};