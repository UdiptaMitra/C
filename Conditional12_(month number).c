// WAPC to print monthnames with corresponding month numbers as inputted
#include <stdio.h>
int main()
{
	int monthnum;
	printf("\nEnter month number");
	scanf("%d",&monthnum);
	switch(monthnum)
	{
		case 1:
			printf("\nJan");
			break;
		case 2:
			printf("\nFeb");
			break;
		case 3:
			printf("\nMar");
			break;
		case 4:
			printf("\nApr");
			break;
		case 5:
			printf("\nMay");
			break;
		case 6:
			printf("\nJun");
			break;
		case 7:
			printf("\nJul");
			break;
		case 8:
			printf("\nAug");
			break;
		case 9:
			printf("\nSep");
			break;
		case 10:
			printf("\nOct");
			break;
		case 11:
			printf("\nNov");
			break;
		case 12:
			printf("\nDec");
			break;
		default:
		    printf("\nInvalid Month number");
		    break;
	}
	return 0;
}
