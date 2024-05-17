#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 5


void swap(int* val1, int* val2) {
    int temp; 
    temp = *val1; 
    *val1 = *val2; 
    *val2 = temp;
}


void sortArray(int* arr, int size) {
    int i, j; 
    bool swapped; 
    for(i = 0; i < size - 1; i++) {
        swapped = false;
        for(j = 0; j < size - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            break;
        }
    }
}


int sumOfTwo(int* arr, int size, int* num1, int* num2, int value) {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            if((arr[i] + arr[j]) == value) {
                *num1 = arr[i];
                *num2 = arr[j];
                return 1;
            }
        }
    }

    return 0;

}

void printArray(int* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}



int main(){
    int array[SIZE] = {1, 4, 28, 3, 7};
    int num1, num2, value = 2;
    sortArray(array, SIZE);
    int returnedVal = sumOfTwo(array, SIZE, &num1, &num2, value);
    printArray(array, SIZE);
    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("%d\n", returnedVal);

    return 0;
}