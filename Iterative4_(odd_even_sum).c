//WAPC to display the sum of the first ‘n’ odd numbers and the sum of the first ‘n’ even numbers
#include<stdio.h>
int main()
{
    unsigned int n;
    int i,even=0,odd=0;
    printf("\nInput a natural number 'n': ");
    scanf("%u",&n);
    for(i=0;i<=(2*n);i+=2)
    {
        even+=i;
    }
    for(i=1;i<=(2*n-1);i+=2)
    {
        odd+=i;
    }
    printf("\nThe sum of first 'n' odd numbers are %d",odd);
    printf("\nThe sum of first 'n' even numbers are %d",even);
    return 0;
}
