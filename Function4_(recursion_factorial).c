//WAPC to find factorial of a number by recursion

#include <stdio.h>
int factorial(int n);
int main()
{
    int fact,n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("The factorial is %d\n", fact);
    return 0;
}
int factorial(int n)
{
    int factn1,factn;
    if(n==0)//base case
    {
        return 1;
    }
    factn1=factorial(n-1);//assume true n-1 th iteration
    factn=n*factn1;
    return factn;
}

/*recursion is basically like induction where u have to assume true n-1th thing 
and account for base case separately*/
