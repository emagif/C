#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void genericSwapFunction(void* a, void* b, int size) {
    // size - specifies the numer of bytes to be swapped
    void* tempMemory = malloc(size);
    // we will use the memcpy function -> void* memcpy (void *destination, const void *source , size_t num);

    memcpy(tempMemory, a, size);
    memcpy(a, b, size);
    memcpy(b, tempMemory, size);
    free(tempMemory);
}

void intSwapFunction(int* a, int* b) {
    int temp = *a; 
    *a = *b; 
    *b = temp;
}

int main() {

    int num1 = 5, num2 = 7;
    genericSwapFunction(&num1, &num2, sizeof(int));
    printf("num1 = %d, num2 = %d\n", num1, num2);



    return 0;
}