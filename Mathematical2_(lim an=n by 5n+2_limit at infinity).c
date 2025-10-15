//lim n to inf =n/(5n+2) = a_n
//use double instead of float for accurate results
#include <stdio.h>
#include<math.h>
int main()
{
	double eps=1.00,ancurrent=1.00,anprev=1.00;//always initialize even if it feels unnecessary (for limit type)
	double n=1.00;
	while(eps>0.000000000000000001)
	{
		ancurrent = n/(5*n +2);//always find value before swap		
		n++;
		eps=fabs(ancurrent-anprev);
		anprev=ancurrent;//swap
	}
	printf("The limit is close to %lf",ancurrent);//%lf for double output
	return 0;
}

