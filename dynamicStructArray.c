#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>




typedef struct point {
    int x; 
    int y; 
}Point;


int main() {
    Point* pointsArray; // allocated dynamically
    int totalPoints; 
    int i;


    printf("Enter the total number of points: ");
    scanf("%d", &totalPoints);

    pointsArray = (Point*)malloc(sizeof(Point) * totalPoints);

    for(i = 0; i < totalPoints; i++) {
        printf("Enter coordinate 'x' for point #%d\t", i+1);
        scanf("%d", &pointsArray[i].x);

        printf("Enter coordinate 'y' for point #%d\t", i+1);
        scanf("%d", &pointsArray[i].y);
    }

    for(i = 0; i < totalPoints; i++) {
        printf("Coordinates of point #%d = (%d, %d)", i+1, pointsArray[i].x, pointsArray[i].y);
        printf("\n");
    }



    return 0;
}