#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>


int strlenFunction(char* string) {
    int i, counter;
    while(1) {
        if(&string[i] != NULL) {
            counter++;
        }
        if(string[i] == '\0') {
            break;
        }
        i++;
    }

    return counter;
}


int main() {

    int length;
    char string[] = "Hello";
    length = strlenFunction(string);
    printf("%d", length);

    return 0;
}