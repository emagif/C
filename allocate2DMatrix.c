#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int** allocate2DMatrix(int rows, int columns) {
    int** matrix;
    int i;
    matrix = (int**)calloc(rows, sizeof(int*));
    for(i = 0; i < rows; i++) {
        matrix[i] = (int*)calloc(columns, sizeof(int));
    }

    return matrix;
}



void print2DArray(int** array, int rows, int columns) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d", array[i][j]);
        }
        printf("\n");
    }
}



int main() {
    int** a;
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    a = allocate2DMatrix(rows, columns);
    print2DArray(a, rows, columns);


    return 0;
}