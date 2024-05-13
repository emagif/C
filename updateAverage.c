#include <stdio.h>
#include <stdlib.h>


void updateAverage(int* average, int num1, int num2) {
    *average = (num1 + num2) / 2;
}



int main() {

    int num1 = 10; 
    int num2 = 30;
    int average;
    updateAverage(&average, num1, num2);
    printf("Tha average is: %d\n", average);


    return 0;
}