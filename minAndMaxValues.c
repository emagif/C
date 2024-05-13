#include <stdio.h>
#include <stdlib.h>


int minValue(int* arr, int size) {
    int minimum = arr[0], i; 
    for (i = 0; i < size; i++) {
        if( arr[i] < minimum) {
            minimum = arr[i];
        }
    }
    return minimum;
}


int maxValue(int* arr, int size) {
    int maximum = arr[0], i; 
    for(i = 0; i < size; i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    return maximum;
}

double sumOfArray(int* arr, int size) {
    double sum = 0; 
    for (int i = 0; i < size; i++) {
        sum+=arr[i];
    }
    return sum;
}


double averageOfArray(int* arr, int size) {
    double sum = sumOfArray(arr, size);
    double average = sum/size;
    return average;
}



int main() {

    int myGrades[] = {80, 50, 100};
    int min = minValue(myGrades, sizeof(myGrades)/sizeof(myGrades[0]));
    int max = maxValue(myGrades, sizeof(myGrades)/sizeof(myGrades[0]));
    printf("Min value is: %d\n", min);
    printf("Max value is: %d\n", max);


    return 0;
}