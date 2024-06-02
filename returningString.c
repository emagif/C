#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>



char* strConcat(char* originalStr);



int main() {




    return 0;
}




char* strConcat(char* originalStr) {
    int i; 
    char* newStr = NULL; 
    int lengthOriginal = strlen(originalStr);
    newStr = (char*)malloc((sizeof(char) * lengthOriginal * 2) + 1);
    for(i = 0; i < lengthOriginal; i++) {
        newStr[i] = originalStr[i];
        newStr[i + lengthOriginal] = originalStr[i];
    }
    newStr[i + lengthOriginal] = '\0';

    return newStr;

}
