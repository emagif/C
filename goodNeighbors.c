#include <stdio.h>
#include <stdlib.h>


int goodNeighbors(int* arr, int size) {
    int sum, i; 
    for(i = 1; i < size - 1; i++) {
        if((arr[i-1] + arr[i+1]) == arr[i]) {
            return 1;
        }
    }
    return 0;
}



int main() {

    int grades[10] = {1, 4, 6, 1, 8, 2, 5, 4, 3, 9};
    int result = goodNeighbors(grades, sizeof(grades)/sizeof(grades[0]));
    printf("Good neighbors: %d\n", result);


    return 0;

}