#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>



int* reallocate(int* oldArray, int oldSize, int newSize) {
    int i; 
    int* newArr; 
    newArr = (int*)malloc(sizeof(int) * newSize);
    for(i = 0; i < oldSize; i++) {
        newArr[i] = oldArray[i];
    }
    free(oldArray);
    return newArr;
}



int main() {

    int* gradesArray;
    int i, totalGrades;
    scanf("%d", &totalGrades);
    gradesArray = (int*)malloc(sizeof(int) * totalGrades);
    if(gradesArray != NULL) {
        printf("Allocation Succeded!\n");
    }

    else {
        printf("Allocation Failed.\n");
        exit(1);
    }

    for(i = 0; i < totalGrades; i++) {
        scanf("%d", &gradesArray[i]);
    }

    

    return 0;
}