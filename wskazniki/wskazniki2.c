#include <stdio.h>

int main()
{
    int array[3];

    *array = 100;
    *(array+1) = 101;
    *(array+2)=102;

    return 0;
}