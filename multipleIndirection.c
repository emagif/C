#include <stdio.h>
#include <stdlib.h>

int main() {

    int a = 10;

    int* ptr1 = &a;
    int** ptr2 = &ptr1;

    printf("Value of a = %d\n", a);
    printf("Value of a = %d\n", *ptr1);
    printf("Value of a = %d\n", **ptr2);
    printf("Address of a = %p\n", &a);
    printf("Address of a = %p\n", ptr1);
    printf("Address of a = %p\n", *ptr2);

    return 0;
}
