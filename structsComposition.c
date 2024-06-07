#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>


typedef struct point {
    int x; 
    int y; 
}Point;


typedef struct circle {
    int x; 
    int y; 
    double radius; 
}Circle;


typedef struct circle {
    Point center; 
    double radius;
}Circle;



int main()
{

    Point p1 = {1, 2};
    Circle c1;
    c1.radius = 3.3;
    c1.center = p1;
    printf("%d", c1.center.x);

    return 0;
}