//WAPC to input a positive integer from the user. Find and display the factorial of the number.
#include<stdio.h>
int main()
{
    unsigned int number, factorial=1;
    int i;
    printf("\nInput a positive number: ");
    scanf("%u",&number);
    for(i=number;i>=1;i--)
    {
        factorial*=i;
    }
    printf("\nThe factorial is %u",factorial);
    return 0;
}
