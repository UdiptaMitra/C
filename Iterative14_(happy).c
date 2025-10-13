/*WAPC to input a positive integer. Check whether it is Happy or not. 
Note: Happy Number – A number that eventually reaches 1 when replaced repeatedly by the sum of the squares of its digits. 
Example: 19 ? 1²+9²=82 ? 8²+2²=68 ? 6²+8²=100 … ? 1*/

#include<stdio.h>
int main()
{
    unsigned int num,copy;
    int d,sum=0,totalsum=0;
    printf("\nInput a number: ");
    scanf("%u",&num);
    copy=num;
    while(num>0||sum>9)
    {
        if(num==0)
        {
            num=sum;
            sum=0;
        }
        d=num%10;
        sum+=d*d;
        num /= 10;
    }
    if(sum==1)
    {
        printf("\n%u is a happy number",copy);
    }
    else
    {
        printf("\n%u is not a happy number",copy);
    }
    
   
    return 0;
}
