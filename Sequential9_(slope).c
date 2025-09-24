//WAPC to input the coordinates of two points (x1, y1) and (x2, y2). Calculate the slope and display the same.
#include<stdio.h>
int main()
{
    typedef float point1, point2;
    point1 x1,y1;
    point2 x2,y2;
    float slope;
    printf("\nEnter the first point coordinates: ");
    scanf("%f %f",&x1,&y1);
    printf("\nEnter the second point coordinates: ");
    scanf("%f %f",&x2,&y2);
    slope=(x1-x2)/(y1-y2);
    printf("\nThe slope is %f",slope);
    return 0;
}
