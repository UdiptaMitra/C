//WAPC to find sum of n natural numbers by recursion

#include <stdio.h>
int sumNat(int n);
int main()
{
    int sum,n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    sum=sumNat(n);
    printf("The sum is %d\n", sum);
    return 0;
}
int sumNat(int n)
{
    int sumn1,sumn;
    if(n==0)//base case
    {
        return 0;
    }
    sumn1=sumNat(n-1);//assume true n-1 th iteration
    sumn=n+sumn1;
    return sumn;
}

/*recursion is basically like induction where u have to assume true n-1th thing 
and account for base case separately*/
