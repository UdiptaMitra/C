//WAPC to input two numbers. Check if either of the two inputs is positive.
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter 2 integers: ");
	scanf("%d %d",&num1,&num2);
	if(num1>0 || num2>0)
	{
		printf("\nOne or more inputs is positive");
	}
	else
	{
		printf("\nNone of the inputs is positive");
	}
	return 0;
}
