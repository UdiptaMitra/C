/*WAPC to input a positive integer. Check whether it is Automorphic or not. 
A number whose square ends with the number itself is an Automorphic number. 
Example: 25² = 625 (ends with 25)*/

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int num,copy;
    int square,lastDigits,len=0;
    printf("\nInput a positive number: ");
    scanf("%u",&num);
    square=num*num;
    copy=num;
    while(copy>0)
        {
            len++;
            copy/=10;
        }
    lastDigits=square%(pow(10,len));
    if(lastDigits==num)
    {
        printf("\nthe number %u is an automorphic number",num);
    }
    else
    {
        printf("\nthe number %u is not an automorphic number",num);
    }
    return 0;
}

