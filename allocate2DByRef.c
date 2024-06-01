#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>









void allocate2DMatrixByReference(int** a, unsigned rows, unsigned columns) {
    int i; 
    a = (int**)malloc(sizeof(int*) * rows);
    for(i = 0; i < rows; i++) {
        a[i] = (int*)malloc(sizeof(int) * columns);
    }
}


void print2DMatrix(int** a, unsigned rows, unsigned columns) {
    int i, j; 
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}


int main() {

    int** matrix; 
    allocate2DMatrixByReference(matrix, 3, 3);
    print2DMatrix(matrix, 3, 3);




    return 0;
}