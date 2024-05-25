#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void* myRealloc(void* srcblock, unsigned oldSize, unsigned newSize);

int main() {
    int* numbers = (int*)malloc(3 * sizeof(int));
    int* newNumbers = NULL;

    if(!numbers) {
        return 1;
    }
    numbers[0] = 3;
    numbers[1] = 5;
    numbers[2] = 4;

    newNumbers = (int*)myRealloc(numbers, 3 * sizeof(int), 4 * sizeof(int));

    return 0;
}



void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize) {
    int i;
    char* resultArr = (char*)malloc(newsize);

    if(!resultArr) {
        return NULL;
    }

    for(i = 0; i < oldsize; i++) {
        resultArr[i] = ((char*)srcblock)[i];
    }
    free(srcblock);

    return resultArr;

}
