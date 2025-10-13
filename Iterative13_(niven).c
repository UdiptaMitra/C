/*WAPC to input a positive integer. Check whether it is Niven or not.
Niven number – A number divisible by the sum of its digits. Example: 18 ÷ (1+8) = 2*/

#include<stdio.h>
int main()
{
    unsigned int num,sum=0,copy;
    int d;
    printf("\nInput a number: ");
    scanf("%u",&num);
    copy=num;
    while(num>0)
    {
        d=num%10;
        sum+=d;
        num=num/10;
    }
    if(copy%sum==0)
    {
        printf("\n%u is a niven number",copy);
    }
    else
    {
        printf("\n%u is not a niven number",copy);
    }
    return 0;
}
