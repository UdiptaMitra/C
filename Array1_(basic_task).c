/*array -  homogenous storage unit (all value same type...cant mix them up)
contiguous collection of memory elements store values of same data type
continuity - no break, a thread
contiguity - every element has its own area of storage

Array properties - Name, Indices(0,1,...n-1), Datatype
*/

/* WAPC to do the following
1. Declare an integer array of 5 elements (declaration - just introduction of the variable; initialisation -  giving value to a declared variable)
2. Fill withuser inputs
3. Display the original way
4. Reverse the array
5. Display the reversed array

*/

#include<stdio.h>
int main()
{
	int i, left, right, temp;
	int arr[5]; //1. declaration //5 location allocated; every memory location takes up space of 4(int) bytes
	
	for(i=0;i<5;i++) //2. user input
	{
		printf("\nEnter arr[%d]: ",i);//good formatting technique :)
		scanf("%d",&arr[i]);//population of array by array indexing
	}
	
	printf("\nOriginal array is: ");
	for(i=0;i<5;i++) //3. display array
	{
		printf("arr[%d] = %d\t",i,arr[i]);//accessing array by array indexing
	}
	
	//4. reversing the array
	left=0;
	right=4;
	while(left<right)//less than equal noy; same answer asbe but redundant total no of iteration =(int)n/2 //very efficient
	{
		temp=arr[left];
		arr[left]=arr[right];
		arr[right]=temp;
		++left;
		--right;
	}
	printf("\n ");
	printf("\nReversed array is: ");
	for(i=0;i<5;i++) //5. display reversed array
	{
		printf("arr[%d] = %d\t",i,arr[i]);//accessing array by array indexing
	}
	
}
