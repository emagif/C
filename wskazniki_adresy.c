#include <stdio.h>
#include <stdlib.h>

int zliczanie(int *liczba, int size)
{
    int suma;
    for (int i = 0; i < size; i++)
    {
        suma += liczba[i];
    }
    return suma;
}

int main()
{
    int liczba[10] = {
        1,
        2,
        3,
        4,
        5,
        6,
        7,
        3,
        0,
        1};

    int size = sizeof(liczba) / sizeof(liczba[0]);

    int suma = zliczanie(&liczba, size);
    printf("SUma: %d\n", suma);

    return 0;
}