#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


int main() {

    int* grades = NULL; 
    int* temp = NULL;
    int totalGrades;

    printf("Enter total grades: \n");
    scanf("%d", &totalGrades);

    grades = (int*)malloc(sizeof(int) * totalGrades);
    
    if(grades == NULL) {
        printf("Allocation failed");
        exit(1);
    }

    for(int i = 0; i < totalGrades; i++) {
        printf("Enter grade: ");
        scanf("%d ", &grades[i]);
    }

    totalGrades = totalGrades + 2;
    temp = (int*)realloc(grades, totalGrades * sizeof(int));
    
    if(temp != NULL) {
        grades = temp;
    }

    grades[totalGrades - 1] = 100;
    grades[totalGrades - 2] = 90;

    totalGrades = totalGrades - 3;
    temp = (int*)realloc(grades, totalGrades * sizeof(int));
    
    if(temp != NULL) {
        grades = temp;
    }   

    free(grades);

    return 0;
}