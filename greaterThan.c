#include <stdio.h>
#include <stdlib.h>



int findMax(int num1, int num2) {
    if (num1>num2) {
        return num1;
    }
    else {
        return num2;
    }
}


int findMin(int num1, int num2) {
    if (num1 < num2) {
        return num1;
    }
    else {
        return num2;
    }
}


int main() 
{
    int a = 5, b = 7;
    int max = findMax(a, b);

    printf("The greater numer is %d\n", max);

    int min = findMin(a, b);
    printf("The smaller number is %d \n", min);

    return 0;
}