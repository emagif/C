#include <stdio.h>
#include <stdlib.h>



void findMinMax(int num1, int num2, int* pMax, int* pMin) {
    if(num1 > num2) {
        *pMax = num1; 
        *pMin = num2; 
    }

    else {
        *pMax = num2; 
        *pMin = num1;
    }
}


int main() 
{
    int a = 5, b = 7;
    int max, min; 

    findMinMax(a, b, &max, &min);
    printf("The greater number is %d\n", max);
    printf("The smaller number is %d\n", min);



    return 0;
}
