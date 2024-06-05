#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




char* strConcat(char* destStr, char* sourceStr);



int main() {
    char str1[] = "AlphaTech-";
    char str2[] = "Balphatech";


    return 0;
}



char* strConcat(char* destStr, char* sourceStr) {
    char* newStr; 
    int lengthDest, lengthSource;
    lengthDest = strlen(destStr);
    lengthSource = strlen(sourceStr);

    newStr = (char*)malloc(sizeof(char) * (lengthDest+lengthSource) + 1);
    int i; 
    for(i = 0; i < lengthDest; i++) {
        newStr[i] = destStr[i];
    }

    for(i = 0; i < lengthSource; i++) {
        newStr[i + lengthDest] = sourceStr[i];
    }
    newStr[lengthDest + lengthSource] = '\0';

    return newStr;
}
