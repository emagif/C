#include <stdio.h>
#include <stdlib.h>



int sumElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i< size; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumElements2(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i< size; i++) {
        sum += arr[i];
    }
    return sum;
}


int main() {
    int array[4] = {1, 2, 3, 4};
    int sum = sumElements(array, sizeof(array)/sizeof(array[0]));
    int sum2 = sumElements2(array, sizeof(array)/sizeof(array[0]));
    printf("Sum of elements with array: %d\n", sum);
    printf("Sum of elements with pointer: %d\n", sum2);

    return 0;
}