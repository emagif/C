#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>

#define SIZE 5



int* createArray() {
    int i; 
    int* myArr;
    myArr = (int*)malloc(sizeof(int) * SIZE);

    if(!myArr) {
        printf("You've got some error when trying to allocate. Check your memory\n");
        exit(1);
    }

    else {
        printf("Enter %d elements to your array.\n", SIZE);
        for(i = 0; i < SIZE; i++) {
            printf("Enter number %d: ", i + 1);
            scanf("%d", &myArr[i]);
        }
    }
    return myArr;

}

void printArray(int* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}



int main() {
    int* arr; 
    arr = createArray();
    printArray(arr, SIZE);


    return 0;
}


