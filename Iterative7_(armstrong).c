/*WAPC to input a positive integer. Check and print if the number is Armstrong or not. 
An Armstrong number is a number that is equal to the sum of its own digits each raised to the 
power of the number of digits, for example, 153 = 1³ + 5³ + 3³.*/

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int num,copy1,copy2;
    int d,sumDigitPower=0,count=0;
    printf("\nInput a number: ");
    scanf("%u",&num);
    copy1=num;
    copy2=num;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    while(copy1>0)
    {
        d=copy1%10;
        sumDigitPower+=pow(d,count);
        copy1=copy1/10;
    }
    if(sumDigitPower==copy2)
    {
        printf("\n%u is a armstrong number",copy2);
    }
    else
    {
        printf("\n%u is not a armstrong number",copy2);   
    }
    return 0;
}
