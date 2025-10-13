//WAPC to check and print if a number is divisible by both 3 and 5.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number for its divisibility to be checked: ");
    scanf("%d",&num);
    if(num%3==0&&num%5==0)
    {
        printf("Yes div by both 3 and 5");
    }
    else if(num%3!=0&&num%5==0)
    {
        printf("Not div by 3 but yes div by 5");
    }
    else if(num%3==0&&num%5!=0)
    {
        printf("Not div by 5 but yes div by 3");
    }
    else
    {
        printf("Not div by both 3 and 5");
    }
    return 0;
}
