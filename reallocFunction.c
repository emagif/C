#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>


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