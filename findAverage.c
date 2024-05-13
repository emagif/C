#include <stdio.h> 
#include <stdlib.h>


double calculateSum(double *arr, int size) {
    double sum; 
    int i; 
    for(i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}


double findAverage(double *arr, int size) {
    double average = calculateSum(arr, size) / size;
    return average;
}


int main() {

    double grades[5] = {98.4, 78.3, 86.2, 91.1, 100.0};
    double average = findAverage(grades, sizeof(grades)/sizeof(grades[0]));

    printf("The average is: %.1f\n", average);

    return 0;
}