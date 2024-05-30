#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int** create2DMatrix(int rows, int columns) {
    int** matrix; 
    int i, j;

    matrix = (int**)calloc(rows, sizeof(int*));
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            matrix[i] = (int*)calloc(columns, sizeof(int));
        }
    }

    return matrix;
}

void initializeMatrix(int** matrix, int rows, int columns) {
    int i, j;
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("Enter value for index %d, %d\t", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int** matrix, int rows, int columns) {
    int i, j; 
    for(i = 0; i < rows; i++) {
        for(j = 0; j < columns; j++) {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
}


void swapRows(int** matrix, int* row1, int* row2) {
    int* temp;
    temp = row1; 
    row1 = row2; 
    row2 = temp;
}


int main() {
    int** a; 
    int rows, columns; 
    printf("Enter amount of rows: ");
    scanf("%d", &rows);

    printf("Enter amount of columns: ");
    scanf("%d", &columns);

    a = create2DMatrix(rows, columns);
    initializeMatrix(a, rows, columns);
    printMatrix(a, rows, columns);
    swapRows(a, a[0], a[1]);
    printMatrix(a, rows, columns);

    return 0;
}

// Doesn't work