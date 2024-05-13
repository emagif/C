#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{   
    
    char some_char ='A';
    char* text;
    int len;

    printf("some char: %c\n", some_char);

    printf("Enter message length: ");
    scanf("%d\n", &len);

    text = (char*)malloc(len);

    printf("Enter a message: ");
    scanf("%s", text);

    printf("Message length: %d\n", strlen(text));

    printf("some char: %c\n", some_char);

    return 0;
}