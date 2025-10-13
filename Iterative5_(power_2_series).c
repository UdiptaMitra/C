//WAPC to display the following series of numbers: 1, 2, 4, 8, …, n-terms.
#include<stdio.h>
#include <math.h>
int main()
{
    unsigned int n;
    int i,power;
    printf("\nInput a positive number 'n': ");
    scanf("%u",&n);
    printf("\nThe series 1, 2, 4, 8, ...n terms is\n" );
    for(i=0;i<n;i+=1)
    {
        power=pow(2,i);
        printf("\t%d,",power);
    }
    return 0;
}
