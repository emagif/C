#include <stdio.h>
#include <stdlib.h>


#define SIZE 5

int isOppositeSign(int* arr, int size) {
    if(size == 1) {
        return 1;
    }

    if(arr[size - 1] * arr[size - 2] >= 0) {
        return 0;
    }

    return isOppositeSign(arr, size - 1);

}



int main() {
    int array[SIZE] = {-1, 2, 3, 5, -4};
    int isOpposite = isOppositeSign(array, SIZE);
    printf("%d\n", isOpposite);

    return 0;
}

