//WAPC to input principle, rate and time and report the simple interest

#include<stdio.h>
int main()
{
	float principle,rate,time,simple_interest,amount;
	printf("\nEnter the value of principle amount: ");
	scanf("%f",&principle);
	printf("\nEnter the value of rate: ");
	scanf("%f",&rate);
	printf("\nEnter the time: ");
	scanf("%f",&time);
	simple_interest=(principle*time*rate)/100;
	amount=principle+simple_interest;
	printf("\nThe simple interest is: %.2f",simple_interest);
	printf("\nThe amount is: %.2f",amount);
	return 0;
	
}
