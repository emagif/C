#include <stdio.h> 
#include <stdlib.h>

#define SIZE 5

int isArrayPalindrome(int* arr, int size) {
    if(arr[0]!=arr[size-1]) {
        return 0;
    }

    if(size <= 1) {
        return 1;
    }

    else {
        return isArrayPalindrome(arr + 1, size - 2);
    }
    
}



int main() {

    int array[SIZE] = {1, 2, 3, 2, 1};


    return 0;
}