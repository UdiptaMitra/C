/* WAPC to input the number of units of electricity consumed by a consumer. Calculate and print the electricity bill based on the following criteria:
First 100 units: Rs. 2 per unit
Next 200 units: Rs. 3 per unit
Above 300 units: Rs. 4 per unit
A surcharge of 2.5% is levied on the bill if the number of units consumed exceeds 300 units. */
#include<stdio.h>
int main()
{
	float units, bill;
	printf("\nEnter number of units consumed: ");
	scanf("%f",&units);
	if (units>300)
	{
		bill=((2*100)+(3*200)+(4*(units-300)));
		bill=bill+(2.5*0.01*bill);
		printf("\nThe bill amount is %f",bill);
	}
	else if (units>100 && units<=300)
	{
		bill=((2*100)+(3*(units-100)));
		printf("\nThe bill amount is %f",bill);
	}
	else if (units>=0 && units<=100)
	{
		bill=2*units;
		printf("\nThe bill amount is %f",bill);
	}
	else
	{
		printf("\nEnter a valid positive value");
	}
	return 0;
}
