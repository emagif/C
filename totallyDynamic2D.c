#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main() {
    int** a;
    int rows, columns;
    int i;
    printf("Please enter number of rows: ");
    scanf("%d", &rows);

    a = (int**)calloc(rows, sizeof(int*));

    for(i = 0; i < rows; i++) {
        printf("Enter number of columns: ");
        scanf("%d", &columns);
        a[i] = (int*)calloc(columns, sizeof(int));
    }

    return 0;
}