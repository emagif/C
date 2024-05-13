#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// function for integers swapping
void swapInts(int* a, int* b) {
    int* temp = a; 
    *a = *b; 
    *b = *temp;
}

// function for intgeners swapping using addition and subtraction
void swapIntsNoThird(int* a, int* b) {
    *a = *a + *b;
    *b = *a - *b; 
    *a = *a - *b;
}

// function for integers swapping using multiplication and division
void swapIntsNoThird2(int* a, int* b) {
    *a = (*a)*(*b); 
    *b = (*a)/(*b);
    *a = (*a)/(*b);
}

// function for generic swapping
void genericSwapFunction(void* a, void* b, unsigned int size) {
    void* temp = malloc(size);

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}


int main() {

    int num1 = 5, num2 = 7;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapInts(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapIntegersWithAddingAndSubtracting(&num1, &num2);
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    swapIntegersWithMultiplyingAndDivision(&num1, &num2);    
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    genericSwapFunction(&num1, &num2, sizeof(int));
    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);


    return 0;
}