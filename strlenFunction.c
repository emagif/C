#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int strlenFunction(char* string) {
    int i;
    while(string[i] != '\0') {
       i++;
    }

    return i;
}


int main() {

    int length;
    char string[] = "Hello";
    length = strlenFunction(string);
    printf("%d", length);
    printf("\n");

    return 0;
}