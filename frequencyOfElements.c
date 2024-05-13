#include <stdio.h>
#include <stdlib.h>




void countFrequency(int* arr, int size) {
    int i, j;
    int leftFlag;
    int countValue = 1;

    for(i = 0; i < size; i++) {
        countValue = 1;
        leftFlag = 0;

        for(j = 0; j < i; j++) {
            if(arr[j] == arr[i]) {
                leftFlag = 1; 
                break;
            }
        }
        if(leftFlag == 1) {
            continue;
        }
        for(j = i + 1; j < size; j++) {
            if(arr[j] == arr[i]) {
                countValue++;
            }
        }
        printf("Value %d appears %d times\n", arr[i], countValue);
    }
}



int main() {
    int array[5] = {1, 4, 1, 5, 7};
    countFrequency(array, 5);



    return 0;
}