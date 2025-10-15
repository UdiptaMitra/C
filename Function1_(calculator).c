//With the help of 4 user-defined functions, design a basic calculator capable of addition, subtraction, multiplication and division.

#include <stdio.h>
int main() 
{
    void addition(float num1,float num2);
    void substraction(float num1,float num2);
    void multiplication(float num1,float num2);
    void division(float num1,float num2);
    int ch;
    float num1,num2;
    printf("Enter 2 numbers: ");
    scanf("%f %f",&num1,&num2);
    printf("Enter 1 for addition or 2 for subtraction or 3 for product or 4 for quotient: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            addition(num1,num2);
            break;
        }
        case 2:
        {
            substraction(num1,num2);
            break;
        }
        case 3:
        {
            multiplication(num1,num2);
            break;
        }
        case 4:
        {
            division(num1,num2);
            break;
        }
        default:
        {
            printf("Wrong input");
            break;
        }
    }
    return 0;
}
void addition(float num1,float num2)
{
    float sum;
    sum=num1+num2;
    printf("The addition result sum is %0.2f",sum);
}
void substraction(float num1,float num2)
{
    float diff;
    diff=num1-num2;
    printf("The substraction result difference is %0.2f",diff);
}
void multiplication(float num1,float num2)
{
    float prod;
    prod=num1*num2;
    printf("The multiplication result product is %0.2f",prod);
}
void division(float num1,float num2)
{
    float quot;
    quot=num1/num2;
    printf("The division result quotient is %0.2f",quot);
}

