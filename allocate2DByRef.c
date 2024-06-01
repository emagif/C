#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



void allocate2DMatrixByReference(int*** a, int rows, int columns) {
    int** myMat;
    int i; 
    myMat = (int**)calloc(rows, sizeof(int*));
    if(!myMat) {
        return NULL;
    }
    for(i = 0; i < rows; i++) {
        myMat[i] =(int*)calloc(columns, sizeof(int));
        if(!myMat[i]) {
            return NULL;
        }
    }
    *a = myMat;
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
    int rows, columns;
    printf("Enter rows: ");
    scanf("%d", &rows);
    printf("Enter columns: ");
    scanf("%d", &columns);

    int** matrix; 
    allocate2DMatrixByReference(&matrix, rows, columns);
    print2DMatrix(matrix, 3, 3);




    return 0;
}