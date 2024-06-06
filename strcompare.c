#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int strCompare(char* str1, char* str2); // lengthwise

int main() {
 
    char str1[] = "Hello";
    char str2[] = "Siemanko";
    int returnedVal = strCompare(str1, str2);
    printf("%d", returnedVal);


    return 0;
}




int strCompare(char* str1, char* str2) {
    int firstLength, secondLength; 

    firstLength = strlen(str1);
    secondLength = strlen(str2);

    if(firstLength > secondLength) {
        return -1;
    }

    else if(secondLength > firstLength) {
        return 1;
    }

    else { 
        return 0;
    }
}
