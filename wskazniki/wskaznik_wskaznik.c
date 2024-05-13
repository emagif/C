#include <stdio.h>


void IncreasePtr(int** ptr)
{
    (*ptr)++;
    printf("%d\n", **ptr);
}

int main()
{
    int array[3] = {100, 101, 102};
    int *ptr;

    ptr = array+1;
    printf("%d\n", *ptr);

    IncreasePtr(&ptr);
    printf("%d\n", *ptr);

    return 0;
}