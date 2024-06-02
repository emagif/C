#include <stdio.h>
#include <stdlib.h> 
#include <malloc.h>


int main() {

    char charsArray[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char str[] = "Hello";

    char* tempPtr; 
    tempPtr = charsArray;
    tempPtr[0] = 'G';
    printf("%c", charsArray[0]);


    return 0;
}