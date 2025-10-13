/*WAPC to do the following:
Input: day, month, year.
Check the following:
Month between 1 and 12.
Correct days in month (30 vs 31 days).
February: 28 days normally, 29 days if leap year.
Output: "Valid date" or "Invalid date".
*/
#include <stdio.h>
int main()
{
	int leapflag = 1, dateflag = 0;
	unsigned int day, month, year;
	printf("\nInput the year: ");
	scanf("%u",&year);
	printf("\nInput the month: ");
	scanf("%u",&month);
	printf("\nInput the day: ");
	scanf("%u",&day);
	if(year%100==0)
	{
		if(year%400==0)
		{
			leapflag=1;
		}
		else
		{
			leapflag=0;
		}
	}
	else if (year%4==0)
	{
		leapflag=1;
	}
	else
	{
		leapflag=0;
	}
	if (month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	{
		if(day<=31 && day>0)
		{
			dateflag=1;
		}
		else
		{
			dateflag=0;
		}
	}
	else if (month==4||month==6||month==9||month==11)
	{
		if(day<=30 && day>0)
		{
			dateflag=1;
		}
		else
		{
			dateflag=0;
		}
	}
	else if (month==2 && leapflag==1)
	{
		if(day<=29 && day>0)
		{
			dateflag=1;
		}
		else
		{
			dateflag=0;
		}
	}
	else if (month==2 && leapflag==0)
	{
		if(day<=28 && day>0)
		{
			dateflag=1;
		}
		else
		{
			dateflag=0;
		}
	}
	else 
	{
		dateflag=0;
	}
	if (dateflag==1)
	{
		printf("\nvalid date");
	}
	else
	{
		printf("\ninvalid date");
	}
	return 0;
}
