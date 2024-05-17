#include <stdio.h>
#include <stdlib.h>


int findIf2ElementsSumOn2(int* arr, int size, int value, int* iPtr, int* jPtr) {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if((arr[i] + arr[j]) == value) {
                *iPtr = i;
                *jPtr = j;
                return 1;
            }
        }
    }
    *iPtr = 0;
    *jPtr = 0;
    return 0;
}




int main() {



    return 0;
}
