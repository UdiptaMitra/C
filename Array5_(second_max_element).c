/*WAPC to input an array of 'n' elements from the user. Find and display the second highest element of the array.*/
#include<stdio.h>
int main()
{
    int i,n,largest,secondHighest;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }

    }
    secondHighest=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>secondHighest && a[i]<largest)
        {
            secondHighest=a[i];
        }

    }
    printf("The second largest element is %d",secondHighest);
    return 0;
}
