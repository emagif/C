#include <stdio.h>
#include <string.h>

int main()
{   
    
    char some_char ='A';
    char text[10];


    printf("some char: %c\n", some_char);

    printf("Enter a message: ");
    scanf("%s", text);

    printf("Message length: %d\n", strlen(text));

    printf("some char: %c\n", some_char);

    return 0;
}