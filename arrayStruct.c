#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>




typedef struct point {
    int x; 
    int y;
}Point;



int main() {

    Point pointsArray[5];
    int i;


    printf("Enter a first point 'x' coordinate: ");
    scanf("%d", &pointsArray[0].x);

    printf("Enter a first point 'y' coordinate: ");
    scanf("%d", &pointsArray[0].y);

    // Iterating over all the of the Point Array (and reading input into each of them)
    for(i = 0; i < 5; i++) {
        printf("Enter point #%d 'x' coordinate: ", i+1);
        scanf("%d", &pointsArray[i].x);

        printf("Enter point #%d 'y' coordinate: ", i+1);
        scanf("%d", &pointsArray[i].y);
    }
    
    printf("\n\n");
    printf("Now printing them");
    printf("\n");

    for(i = 0; i < 5; i++) {
        printf("Coordinate 'x' = %d of point #%d ", pointsArray[i].x, i+1);
        printf("\n");

        printf("Coordinate 'y' = %d of point #%d ", pointsArray[i].y, i+1);
        printf("\n");
    }


    return 0;
}