#include <stdio.h>

void sort(int *array, int len)
{
    
    while (*array !=0)
    {
        for(int i = 0; i<len; i++)
        {
            if ((*array) + 1 < (*array))
            {
                (*array) = (*array) + 1;
            }
            
        }
        array++;
    }
}

int main()
{
    int array[10] = {1, 2, 3, 6, 1, 2, 3, 4, 6, 0};
    int len = sizeof(array)/sizeof(int);
    sort(array, len);

    for(int i = 0; i < len; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;

}