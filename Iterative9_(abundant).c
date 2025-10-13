/*WAPC to input a positive integer. Check whether the number is abundant or not.
Abundant Number – A number for which the sum of proper divisors is greater than the number. 
Example: 12 ? 1+2+3+4+6=16 > 12*/

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
    if(sumFactor>copy)
    {
        printf("\n%u is a abundant number",copy);
    }
    else
    {
        printf("\n%u is not a abundant number",copy);   
    }
    return 0;
}
