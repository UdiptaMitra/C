//1.	WAPC to input two integers and display the contents after swapping.
//2.	WAPC to input two numbers and swap them without using a third variable.

#include<stdio.h>
int main()
{
    int num1, num2, temp;
    // 1 with variable
    printf("\nInput 2 numbers to be swapped with a third variable: ");
    scanf("%d %d",&num1,&num2);
    temp=num1;
    num1=num2;
    num2=temp;
    printf("\nThe swapped numbers are: %d %d",num1,num2);
    // 2 without variable
    printf("\nInput 2 numbers to be swapped without a third variable: ");
    scanf("%d %d",&num1,&num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nThe swapped numbers are: %d %d",num1,num2);
    return 0;
}
