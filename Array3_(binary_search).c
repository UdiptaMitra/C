/*WAPC to initialize the array with 10 integers of your choice. Input an integer from the user. 
Check and display whether or not the input entered by the user is present in the array or not. 
Use the binary search technique (Hint: Make sure the array elements are sorted).*/
#include<stdio.h>
int main()
{
	int arr[]={12,23,42,58,66,71,84,99,103,112};	
	int left=0, srch, flag=0,right=9,mid;
	printf("\nEnter search value: ");
	scanf("%d",&srch);
	while(left<=right)
	{
		mid=(left+right)/2;
		if(srch==arr[mid])
		{
			flag=1;
			break;
		}
		else if(srch>arr[mid])
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	if (flag==1)
	{
		printf("\nfound");
	}
	else
	{
		printf("\nnot found");
	}
	return 0;
}
//sizeof operator- memory units used by any datatype
//printf("%d",sizeof(int)); - 4
//printf("%d",sizeof(arr)); - 10*4=40 this ques
//size of array = no of elements * size of datatype

