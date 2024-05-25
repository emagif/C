#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

void* myRealloc(void* srcblock, unsigned oldsize, unsigned newsize) {
        
    int smallSize; 
    void* newArr = malloc(newsize);

    if(!newArr) {
        return NULL;
    }

    if(oldsize < smallSize) {
        smallSize = oldsize;
    }

    else {
        smallSize = newsize;
    }

    memcpy(newArr, srcblock, smallSize);


}



int main() {



    return 0;
}