#include <stdio.h>
#include <stdlib.h>


#define SIZE 5

int isOppositeSign(int* arr, int size) {
    if(arr[0] < 0 && (*(arr + 1)) < 0) {
        return 0;
    }

    if(size <= 1) {
        return 1;
    }

    else {
        return isOppositeSign(arr+1, size - 1);
    }
}



int main() {
    int array[SIZE] = {-1, 2, 3, 5, 4};
    int isOpposite = isOppositeSign(array, SIZE);
    printf("%d ", isOpposite);

    return 0;
}

