#include <stdio.h>
#include <stdlib.h>


// Iterative approach solution

int checkSorted(int* arr, int size, int* isReallySorted) {

    int i;
    *isReallySorted = 1; 
    for(i = 1; i < size; i++) {
        if(arr[i] <= arr[i-1]) {
            *isReallySorted = 0;
        }
        if(arr[i] < arr[i-1]) {
            return 0;
        }
    }
    return 1;
}

// Recursive approach solution

int checkSortedRecursive(int* arr, int size, int* isReallySorted) {
    int result; 
    if(size == 1) {
        *isReallySorted = 1;
        return 1;
    }

    result = checkSortedRecursive(arr, size - 1, isReallySorted);

    if(result != 0 && arr[size - 1] == arr[size - 2]) {
        *isReallySorted = 0;
    } 
    if(result != 0 && arr[size-1] < arr[size-2]) {
        return 0;
    }
    return result;
}


int main() {

    int array[4] = {1, 2, 3, 8};
    int isReallySorted;
    int result = checkSorted(array, sizeof(array)/sizeof(array[0]), &isReallySorted);
    printf("The result: %d\n", result);



    return 0;
}