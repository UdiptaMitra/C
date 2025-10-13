//WAPC to display the first ‘n’ natural numbers where ‘n’ is the user input.
#include<stdio.h>
int main()
{
    unsigned int n;
    int i;
    printf("\nInput a natural number 'n': ");
    scanf("%u",&n);
    printf("\nThe first 'n' natural numbers are: ");
    for(i=1;i<=n;i++)
    {
        printf("\n%d",i);
    }
    return 0;
}
