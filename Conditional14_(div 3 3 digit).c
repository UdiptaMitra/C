//WAPC to check if a number is of 3-digits and divisible by 3.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    if(num%3==0&&num/100!=0&&num/1000==0)
    {
        printf("\nYes div by 3 and 3 digit");
    }
    else if(num%3!=0&&num/100!=0&&num/1000==0)
    {
        printf("\nNot div by 3 and yes 3 digit");
    }
    else if(num%3==0&&num/100!=0&&num/1000!=0)
    {
        printf("\nYes div by 3 and not 3 digit");
    }
    else
    {
        printf("\nNot div by 3 and not 3 digit");
    }
}
