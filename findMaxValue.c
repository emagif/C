#include <stdio.h>
#include <stdlib.h>

int findMaxValue(int* arr, int size) {
    int maximum = arr[0];
    for (int i = 0; i < size; i++) {
        if(arr[i] > maximum) {
             maximum = arr[i];
        }
    }
    return maximum;
}


int main() {

    int array[4] = {1, 2, 8, 4};
    int max = findMaxValue(array, sizeof(array)/sizeof(array[0]));
    printf("Max value is: %d\n", max);
    return 0;
}