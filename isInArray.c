#include <stdio.h>
#include <stdlib.h>



int isInArray(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if(arr[i] == element) {
            return 1;
        }
    }
    return 0;
}



int main() {
    int element = 8;
    int array[4] = {1, 2, 3, 4};
    int result = isInArray(array, sizeof(array)/sizeof(array[0]), element);
    if (result == 1) {
        printf("Element %d is in the array\n", element);
    }
    else {
        printf("Element %d is not in the array\n", element);
    }

    return 0;
}