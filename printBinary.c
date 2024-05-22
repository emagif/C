#include <stdio.h>
#include <stdlib.h>



void printBinary(int n) {
    if(n == 1) {
        printf("%d", n);
    }
    else {
        printBinary(n/2);
        printf("%d", n%2);
    }
}





int main() {
    int m = 8;
    printBinary(m);



    return 0;
}