/*WAPC to input a positive integer from the user. Check and print if the number is palindrome or not. 
A palindrome number is a number that remains the same when its digits are reversed, for example, 121.*/

#include<stdio.h>
int main()
{
    unsigned int num,copy;
    int d,reverse=0;
    printf("\nInput a number: ");
    scanf("%u",&num);
    copy=num;
    while(num>0)
    {
        d=num%10;
        reverse=(reverse*10)+d;
        num=num/10;
    }
    if(reverse==copy)
    {
        printf("\n%u is a palindrome number",copy);
    }
    else
    {
        printf("\n%u is not a palindrome number",copy);   
    }
    return 0;
}
