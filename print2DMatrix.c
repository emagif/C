#include <stdio.h>  
#include <stdlib.h> 
#include <malloc.h>


int** create2DMatrix(int rows, int columns) {
    int i; 
    int** matrix;
    matrix = (int**)calloc(rows, sizeof(int*));

    for(i = 0; i < rows; i++) {
        matrix[i] = (int*)calloc(columns, sizeof(int));
    }

    return matrix;
}


void print2DMatrix(int** matrix, int rows, int columns) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}

void fillArray(int** matrix, int rows, int columns) {
    int i, j; 

    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("Fill the matrix at index %d, %d \n", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}


int main() {

    int** a;
    int rows, columns;
    
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of rows: ");
    scanf("%d", &columns);

    a = create2DMatrix(rows, columns);
    fillArray(a, rows, columns);
    print2DMatrix(a, rows, columns);


    return 0;
}