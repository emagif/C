#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <malloc.h>



typedef struct employee {
    char name[10];
    float age; 
    int id;
}Employee;


void printEmployee(Employee emp) {
    printf("Employee #1 name is %s\n", emp.name);
    printf("Employee #1 age is %.2f\n", emp.age);
    printf("Employee #1 id is %d\n", emp.id);
}



void incrementAge(Employee* empPtr) {
    (*empPtr).age +=1;
}



int main() {
    Employee employee1 = {"Jake", 24.5, 123};
    printEmployee(employee1);
    incrementAge(&employee1);
    printf("\n");
    printEmployee(employee1);

    return 0;
}