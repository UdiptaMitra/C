/*WAPC to input an integer array from the user. 
Sort the array in ascending or descending order using selection sort technique.
Find the minimum element in the unsorted portion of the array and swap it with the 
first unsorted element. Repeat until the array is fully sorted.*/

#include <stdio.h>

int main()
{
    int i,j,temp, n,ch,min_index;
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
            for(i=0;i<n;++i)
            {
                min_index=i;
                for (j=i+1;j<n;++j) 
                {
                    if (arr[j]<arr[min_index])
                    {
                        min_index=j;
                    }
                }
                temp=arr[i];
                arr[i]=arr[min_index];
                arr[min_index]=temp;
            }
            break;
        }
        case 2:
        {
            for(i=0;i<n;++i)
            {
                min_index=i;
                for (j=i+1;j<n;++j) 
                {
                    if (arr[j]>arr[min_index])
                    {
                        min_index=j;
                    }
                }
                temp=arr[i];
                arr[i]=arr[min_index];
                arr[min_index]=temp;
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
