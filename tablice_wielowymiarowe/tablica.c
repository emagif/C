#include <stdio.h>

#define SIZE 5


int main()
{

    char dungeons[SIZE][SIZE];

    int i, j;

    dungeons[0][0] = '#';
    dungeons[0][1] = '#';
    dungeons[0][2] = '#';
    dungeons[0][3] = '#';
    dungeons[0][4] = '#';


    dungeons[1][0] = '#';
    dungeons[1][1] = ' ';
    dungeons[1][2] = '#';
    dungeons[1][3] = ' ';
    dungeons[1][4] = '#';

    dungeons[2][0] = '#';
    dungeons[2][1] = '#';
    dungeons[2][2] = '#';
    dungeons[2][3] = '#';
    dungeons[2][4] = '#';

    dungeons[3][0] = '#';
    dungeons[3][1] = '#';
    dungeons[3][2] = '#';
    dungeons[3][3] = '#';
    dungeons[3][4] = '#';

    dungeons[4][0] = '#';
    dungeons[4][1] = '#';
    dungeons[4][2] = '#';
    dungeons[4][3] = '#';
    dungeons[4][4] = '#';


    for (i = 0; i<SIZE; i++)
    {
        for (j = 0; j<SIZE; j++)
        {
            putchar(dungeons[i][j]);
        }
        putchar('\n');
    }

    return 0;
}