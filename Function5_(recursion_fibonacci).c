//WAPC to find nth term of fibonacci sequence by recursion

#include <stdio.h>
int fibonacci(int n);
int main()
{
    int fibo,n;
    printf("\nEnter value of n: ");
    scanf("%d",&n);
    fibo=fibonacci(n);
    printf("The nth term of fibonacci sequence is %d\n", fibo);
    return 0;
}
int fibonacci(int n)
{
    int fibon1,fibon2,fibon;
    if(n==0)
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    fibon1=fibonacci(n-1);
    fibon2=fibonacci(n-2);
    fibon=fibon1+fibon2;
    return fibon;
}
