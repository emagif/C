#include <stdio.h>  
#include <stdlib.h>
#include <malloc.h>


void swapRows(void** matrix, int row1, int row2) {
    void* temp;
    temp = matrix[row1];
    matrix[row1] = matrix[row2];
    matrix[row2] = temp;
}



int main() {




    return 0;
}