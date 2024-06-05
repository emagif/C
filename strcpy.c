#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void strcopy(char* destinationStr, char* sourceStr);


int main() {

    char str1[] = "Hello";
    char str2[] = "World";
    strcopy(str1, str2);

    printf("%s", str1);
    printf("\n");
    
    strcopy(str2, str1);
    printf("%s", str2);
    printf("\n");

    return 0;
}



void strcopy(char* destinationStr, char* sourceStr) {
    int i; 
    int lengthDest, lengthSource; 
    lengthDest = strlen(destinationStr);
    lengthSource = strlen(sourceStr);

    if(lengthDest >= lengthSource) {
        for(i = 0; i < lengthSource; i++) {
            destinationStr[i] = sourceStr[i];
        }
    }

    else {
        printf("The operation is invalid. Size of the copied string is to large. Try again with smaller string.");
    }
}