#include <stdio.h>
#include <stdlib.h> 


int isSpecialFloatingSorted(double* arr, int size) {
    int leftInteger, rightInteger;
    double leftFractional, rightFractional;
    if(size == 1) {
        return 1;
    }
    leftInteger = (int)arr[0];
    rightInteger = (int)arr[1];

    leftFractional = arr[0] - leftInteger;
    rightFractional = arr[0] - rightInteger;

    if(leftInteger <= rightInteger && leftFractional >= rightFractional) {
        return isSpecialFloatingSorted(arr+1, size - 1);
    }

    else {
        return 0;
    }
}



int main() {



    return 0;
}