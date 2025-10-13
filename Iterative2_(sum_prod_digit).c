/*WAPC to input a positive integer from the user. Find and display the number of digits, 
sum of the digits of the number and product of the digits of the number.*/

#include<stdio.h>
int main()
{
    unsigned int num,count=0,sum=0,product=1;
    int d;
    printf("\nInput a number: ");
    scanf("%u",&num);
    while(num>0)
    {
        d=num%10;
        sum+=d;
        product*=d;
        count++;
        num=num/10;
    }
    printf("\nthe number of digits is %u",count);
    printf("\nthe sum of digits is %u",sum);
    printf("\nthe product of digits is %u",product);
    return 0;
}
