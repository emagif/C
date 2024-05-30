#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>



void swapColumns(int** matrix, int totalRows, int col1, int col2) {
    int i; 
    int temp;
    for(i = 0; i < totalRows; i++) {
        temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}



int main() {



    return 0;
}