/*WAPC to input a positive integer. Check whether it is Kaprekar or not.
Kaprekar Number – A number whose square can be split into two parts that add up to the number itself. 
Example: 45² = 2025 ? 20 + 25 = 45*/

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int num;
    int square,lastDigits,firstDigits,count=0,copy1,mid;
    printf("\nInput a positive number: ");
    scanf("%u",&num);
    square=num*num;
    copy1=square;
    while(square>0)
    {
        count++;
        square/=10;
    }
    if(count%2==0)
    {
        mid=count/2;
        lastDigits=copy1%(int)((pow(10,mid)));
        firstDigits=copy1/(pow(10,mid));
        if((firstDigits+lastDigits)==num)
        {
            printf("\nthe number %u is an kaprekar number",num);
        }
        else
        {
            printf("\nthe number %u is not an kaprekar number",num);
        }
    }
    else
    {
        printf("\nthe number %u is not an kaprekar number",num);
    }
    
    return 0;
}
