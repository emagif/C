#include <stdio.h> 
#include <stdlib.h>


double findArrayAverage(int* arr, int size) {
    double avgSoFar;
    if(size == 1) {
        return arr[0];
    }
    avgSoFar = findArrayAverage(arr+1, size-1);
    return (avgSoFar*(size-1) + arr[0])/size;
}

int main() {



    return 0;
}