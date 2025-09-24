//WAPC to input a 4-digit number and find the sum and product of the rightmost and leftmost digits.
#include<stdio.h>
int main()
{
    int number, left, right;
    printf("\nEnter a 4-digit number: ");
    scanf("%d",&number);
    right = number % 10;
    left = number / 1000;
    printf("\nProduct of the leftmost and rightmost digits is %d",left*right);
    printf("\nSum of the leftmost and rightmost digits is %d",left+right);
    return 0;
}
