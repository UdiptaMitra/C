/*WAPC to input an integer array from the user. 
Sort the array in ascending or descending order using insertion sort technique.
Build up a sorted subarray from left to right by inserting each new element into 
its correct position in the subarray. Repeat until the array is fully sorted.*/

#include <stdio.h>

int main()
{
    int i,j,temp, n,ch,key;
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
            for (i=1;i<n;++i)
            {
                key=arr[i];
                j=i-1;
                while ((j>=0)&&(arr[j]>key)) 
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=key;
            }
            break;
        }
        case 2:
        {
            for (i=1;i<n;++i)
            {
                key=arr[i];
                j=i-1;
                while ((j>=0)&&(arr[j]<key)) 
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=key;
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
