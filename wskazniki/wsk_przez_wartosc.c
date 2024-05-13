#include <stdio.h>




int main()
{
    int array[3] = {100, 101, 102};
    int *ptr;

    // ptr = &(array[1]);
    ptr = array+1;

    return 0;
}