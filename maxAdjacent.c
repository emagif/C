#include <stdio.h> 
#include <stdlib.h>

#define SIZE 5


int maxAdjacent(int* arr, int size) {
    int currentSum;
    int maxSumSoFar; 

    if(size == 2) {
        return arr[0] + arr[1];
    }
    currentSum = arr[0] + arr[1];
    maxSumSoFar = maxAdjacent(arr + 1, size - 1);

    if(maxSumSoFar > currentSum) {
        return maxSumSoFar;
    }

    else {
        return currentSum;
    }
}


int main() {
    int maxArray[SIZE] = {1, 2, 8, 4, 5};

    int maxSum = maxAdjacent(maxArray, SIZE);
    printf("Max sum of adjacent: %d\n", maxSum);


    return 0;
}