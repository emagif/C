#include <stdio.h>



void IncreaseNumber(int num)
{
    num++;
}

void IncreasePointer(int *num)
{
    (*num)++;
}

int main()
{
    int a;
    int b = 3;

    a = 1;
    IncreaseNumber(a);
    IncreasePointer(&a);

    printf("a = %d\n", a);
    int * ptr = &b;
    printf("b = %d\n", *ptr);


    return 0;
}