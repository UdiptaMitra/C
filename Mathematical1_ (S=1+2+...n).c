//S=1+2+....+n using for loop
#include<stdio.h>
int main()
{
	int n, sum=0, i;
	float avg;
	printf("\nInput the value of n: ");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum+=i;
	}
	avg=(float)sum/n;
	printf("\nThe sum and avg is %d and %f",sum,avg);
}
