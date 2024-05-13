#include <stdio.h>
#include <string.h>


int strlen1(char *text)
{
    int len = 0;

    while(*text!=0)
    {
        len++;
        text++;
    }
    return len;
}

int main()
{

    char text[20] = "hello";

    int len1  = strlen1(text);
    int len2  = strlen(text);
    
    printf("%s\n", text);
    printf("strlen: %d\n", len1);

    printf("%s\n", text);
    printf("strlen: %d\n", len2);

    return 0;
}