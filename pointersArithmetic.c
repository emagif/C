#include <stdio.h>
#include <stdlib.h>


int main() 
{
    int* ptr;

    int grades[3] = {80, 90, 100};
    ptr = grades;

    printf("Grades start at %p \n", ptr);
    printf("Grades start at %p \n", grades);

    printf("Value of grades[0] = %d\n", *grades);
    ptr++;
    printf("Value of grades[1] = %d\n", *ptr);
    ptr++;
    printf("Value of grades[2] = %d\n", *ptr);
    

    return  0;
}