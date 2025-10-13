/*WAPC to input a positive integer. Check whether the number is Sunny or not. 
Sunny Number – A number for which the next number is a perfect square. 
Example: 8 (since 8+1=9 which is 3²)*/

#include<stdio.h>
int main()
{
    unsigned int num;
    int nextNum,flag=0,i;
    printf("\nInput a positive number: ");
    scanf("%u",&num);
    nextNum=num+1;
    for(i=0;i<=nextNum;i++)
    {
        if(nextNum==i*i)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nthe number %u is a sunny number",num);
    }
    else
    {
        printf("\nthe number %u is not a sunny number",num);
    }
   
    return 0;
}
