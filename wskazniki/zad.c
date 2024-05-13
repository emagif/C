#include <stdio.h>

typedef struct
{
    int age;
    double salary;

} Employee;

void IncreaseAge(Employee *employee, int years)
{
    (*employee).age += years;
    printf("%d\n", (*employee).age);
}

int main()
{
    Employee employee;

    employee.age = 30;

    IncreaseAge(&employee, 2);

    return 0;
}