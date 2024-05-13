#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{   
    char** dungeons;
    int i, j;

    dungeons  = (char**)malloc(SIZE*sizeof(char*));

    for (i = 0; i<SIZE; i++)
    {
        dungeons[i] = (char*)malloc(SIZE*sizeof(char));
    }

    for(i = 0; i<SIZE; i++)
    {
        for(j = 0; j<SIZE; j++)
        {
            putchar(dungeons[i][j]);
        }
        putchar('\n');
    }


    return 0;
}