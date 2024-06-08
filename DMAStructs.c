#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


typedef struct employee {
    char name[10];
    float age; 
    int id;
}Employee;


Employee* DMAStruct(size_t size) {
    
    Employee* structArray; 
    structArray = (Employee*)malloc(sizeof(Employee) * size);

    return structArray;
}

void DMAStruct2(size_t size, Employee* array) { 
    array = (Employee*)malloc(sizeof(Employee) * size);
}




int main() {
    int size; 
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    Employee* array = DMAStruct(size);
    Employee* arr;
    DMAStruct2(size, &arr);


    return 0;
}