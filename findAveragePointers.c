#include <stdio.h>
#include <stdlib.h>

#define SIZE 3


double findAverage(double* arr, int size) {
    double average;
  
    if(size > 0) {
        sum += arr[size - 1];
        findAverage(arr, size - 1);
    }

    average = sum/size; 
    return average;
}



int main() {
    double array[SIZE] = {4, 6, 8};
    double average = findAverage(array, SIZE);
    printf("%lf\n", average);

    return 0;
}