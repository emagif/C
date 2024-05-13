#include <stdio.h>
#include <stdlib.h>


int main() {

    int num = 30;
    int* ptr = &num;
    printf("size of int: %lu\n", sizeof(num));
    printf("size of int: %lu\n", sizeof(ptr));


    return 0; 
}