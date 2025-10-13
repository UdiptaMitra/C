/*WAPC to input a positive integer. Check and print if the number is perfect or not.
Perfect number is a number which is equal to the sum of all its proper divisors (excluding itself).
Example: 28 = 1 + 2 + 4 + 7 + 14*/

#include<stdio.h>
int main()
{
    unsigned int num,copy;
    int d,i,sumFactor=0;
    printf("\nInput a number: ");
    scanf("%u",&num);
    copy=num;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sumFactor+=i;
        }
        else
        {
            continue;
        }
    }
    if(sumFactor==copy)
    {
        printf("\n%u is a perfect number",copy);
    }
    else
    {
        printf("\n%u is not a perfect number",copy);   
    }
    return 0;
}
