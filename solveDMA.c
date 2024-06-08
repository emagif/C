#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

typedef struct employee {
    char name[10];
    float age; 
    int id;
}Employee;




Employee* createEmployeesArray(int totalElements) {
    
    Employee* employeesArr;
    int i;
    employeesArr = (Employee*)malloc(sizeof(Employee) * totalElements);
    for(i = 0; i < totalElements; i++) {
        printf("Enter the name of the %d employee", i + 1);
        scanf("%s", &employeesArr[i].name);
        printf("\n");

        printf("Enter the age of the %d employee", i + 1);
        scanf("%f", &employeesArr[i].age);
        printf("\n");

        printf("Enter the id of the %d employee", i + 1);
        scanf("%d", &employeesArr[i].id);
        printf("\n");
    }

    return employeesArr;
}

void updateEmployeesArray(int size, Employee** employeesArray) {
    
    int i; 
    employeesArray = (Employee*)malloc(sizeof(Employee) * size);
    for(i = 0; i < size; i++) {
        printf("Enter the name of the %d employee", i + 1);
        scanf("%s", &employeesArray[i].name);
        printf("\n");

        printf("Enter the age of the %d employee", i + 1);
        scanf("%f", &employeesArray[i].age);
        printf("\n");

        printf("Enter the name of the %d employee", i + 1);
        scanf("%d", &employeesArray[i].id);
        printf("\n");
    }
    *empPtr = employeesArray;
}



int main() {



    return 0;
}