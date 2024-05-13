#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char some_char = 'A';
    char *text;
    int len;

    printf("some_char: %c\n", some_char);

    while(1)
    {
        printf("Enter message length: ");
        scanf("%d\n", &len);

        text = (char*)malloc(sizeof(char)*len);

        printf("Enter message: ");
        scanf("%s\n", text);

        printf("Message length: %d\n", strlen(text));

        free(text);
    }


    printf("some_char: %c\n", some_char);
}
