#include <stdio.h>

typedef struct 
{

    int id; 
    int age;
    double salary;

} Employee;

void GiveRaise(Employee *employee)
{
    (*employee).salary = 1000.0;
}


int main()
{
    Employee employee;

    employee.id = 0;
    employee.age = 30;
    employee.salary = 3500;
    GiveRaise(&employee);
    printf("%f", employee.salary);



    return 0;
}