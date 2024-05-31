#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


// Function responsible for creating the lower triangular matrix
int** createLowerTriangularMatrix(int n) { // n indicates number of rows and number of columns in the matrix
    int** a;
    int i;
    a = (int**)malloc(sizeof(int*) * n);
    for(i = 0; i < n; i++) {
        a[i] = (int*)malloc(sizeof(int) * (i + 1));
    }
    return a;
}


// Function responsible for creating the upper triangular matrix
int** createUpperTriangularMatrix(int n) { // n indicates number of rows and number of columns in the matrix
    int** a;
    int i; 
    a = (int**)malloc(sizeof(int*) * n);
    for(i = 0; i < n; i++) {
        a[i] = (int*)malloc(sizeof(int) * (n - 1));
    }
    return a;
}



int main() {
    int** a;


    return 0;
}