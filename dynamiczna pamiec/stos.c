#include <stdio.h>

int add(int *a, int *b)
{
    int c; 
    c = *a+*b;
    return c;
}

int main()
{
    int x = 1;
    int y = 2;
    int z;

    z = add(&x, &y);
    printf("%d\n", z);

    return 0;
}