#include <stdio.h>
#include <stdlib.h>


int main() {

    int num = 30;

    void* ptr = &num;

    printf("Value of num = %d\n", num);
    printf("Address of num = %p\n", &num);
    printf("Address of num = %p\n", ptr);
    printf("Value of num = %d\n", *(int*)ptr);


    return 0;
}