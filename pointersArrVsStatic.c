#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main() {
    int* arr[5];
    int i; 
    int numOfColumns;
    for(i = 0; i < 5; i++) {
        printf("Enter number of columns: ");
        scanf("%d", &numOfColumns);
        arr[i] = calloc(numOfColumns, sizeof(int));
    }

    return 0;
}