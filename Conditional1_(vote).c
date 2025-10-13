//WAPC to input age check eligible yto vote or not

#include<stdio.h>
int main()
{
	unsigned int age;
	printf("\nEnter the age: ");
	scanf("%u",&age);//%u is format specifier for unsigned int(bigger than iint... neg space go to pos
	if(age>=18)//if else er sathe ; thakena as they and the block are taken as one unit... a single statement
	{
		printf("\nThe person is eligible to vote");
	}
	else
	{
		printf("\nThe person is not eligible to vote");
	}
	return 0;
}
