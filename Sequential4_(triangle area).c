//WAPC to input the base and height of a right triangle and output the area
#include<stdio.h>
int main()
{
	float base,height,area;
	printf("\nEnter the value of base of a right angled triangle"); 
	scanf("%f",&base);
	printf("\nEnter the value of height of a right angled triangle"); 
	scanf("%f",&height);
	area=0.5*base*height;
	printf("\nThe area of the right angled triangle is %f",area);
	return 0;
}
