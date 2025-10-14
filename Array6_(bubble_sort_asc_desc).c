/*WAPC to input an integer array from the user. 
Sort the array in ascending or descending order using bubble sort technique.
Iterate through the array repeatedly, comparing adjacent pairs of elements and swapping them 
if they are in the wrong order. Repeat until the array is fully sorted.*/

#include <stdio.h>

int main()
{
    int i,j,temp, n, maximum,ch;
    printf("\nEnter the total number of elements to be stored in the array: ");
    scanf("%d",&n);
    int arr[n],copy[n];
    for(i=0;i<n;++i)
    {
        printf("\nEnter an integer: ");
        scanf("%d",&arr[i]);
        copy[i]=arr[i];
    }
    
    printf("\nEnter 1 for ascending order, enter 2 for descending order: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        {
            for (i=0;i<n;++i) 
            {
                for (j=0;j<n-i-1;++j) 
                {
                    if (arr[j]>arr[j+1]) 
                    {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            break;
        }
        case 2:
        {
            for (i=0;i<n;++i) 
            {
                for (j=0;j<n-i-1;++j) 
                {
                    if (arr[j]<arr[j+1]) 
                    {
                        temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }
            break;
        }
        default:
        {
            printf("\nwrong value entered, wrong output expected");
            break;
        }
    }
    printf("\noriginal array is: ");
	for(i=0;i<n;i++) 
	{
		printf("arr[%d] = %d\t",i,copy[i]);
	}
    
    printf("\nsorted array is: ");
	for(i=0;i<n;i++) 
	{
		printf("arr[%d] = %d\t",i,arr[i]);
	}
}
