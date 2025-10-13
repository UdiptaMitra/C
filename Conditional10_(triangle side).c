//WAPC to check if a triangle is valid or not. If it is valid, check and print if it is isosceles, scalene or equilateral.
#include<stdio.h>
//infix expression - operator present in bw operands
//postfix expression - operator present after operand
//all infix convert to postfix but redundant paranthesis dile compiler takes more time to discard them bcz postfix e paranthesis er byapar nei
int main()
{
	float side1,side2,side3;
	printf("\nEnter the sides of the triangle: ");
	scanf("%f %f %f",&side1,&side2,&side3);
	if ((side1+side2>side3)&&(side1+side2>side3)&&(side1+side2>side3))
	{
		if (side1==side2==side3)
		{
			printf("\nThe triangle is equilateral");
		}
		else if (side1==side2||side2==side3||side1==side3)
		{
			printf("\nThe triangle is isosceles");
		}
		else
		{
			printf("\nThe triangle is scalene");
		}
	}
	else
	{
		printf("\nThe triangle is invalid");
	}
}
