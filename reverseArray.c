#include <stdio.h>
#include <stdlib.h>

#define SIZE 5



void printIntArray(int* arr, int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


void printCharArray(char* arr, int size) {
    int i; 
    for(i = 0; i < size; i++) {
        printf("%c ", arr[i]);
    }
    printf("\n");
}


void reverseIntArray(int* arr, int size) {
    int temp, i; 
    for(i = 0; i < size/2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp; 
    }
}

void reverseCharArray(char* arr, int size) {
    int temp, i; 
    for(i = 0; i < size/2; i++) {
        temp = arr[i]; 
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {

    int grades[SIZE] = {1, 3, 1, 3, 4};
    reverseIntArray(grades, sizeof(grades)/sizeof(grades[0]));
    printIntArray(grades, sizeof(grades)/sizeof(grades[0]));
 
    char letters[SIZE] = {'a', 'b', 'd', 'g', 'l'};
    reverseCharArray(letters, SIZE);
    printCharArray(letters, SIZE);

   return 0;
}