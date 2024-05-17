#include <stdio.h> 
#include <stdlib.h>

#define SIZE 5


int maxAdjacent(int* arr, int size) {
    int max = 0; 

    if(size == 1) {
        return arr[0];
    }

    if((arr[size - 1] + arr[size - 2]) > max) {
        max = arr[size - 1] + arr[size - 2];
        return max;
    }

    return maxAdjacent(arr, size - 1);
}


int main() {
    int maxArray[SIZE] = {1, 2, 8, 4, 5};

    int maxSum = maxAdjacent(maxArray, SIZE);
    printf("Max sum of adjacent: %d\n", maxSum);


    return 0;
}