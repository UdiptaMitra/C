//WAPC to input a character. Categorize it as either uppercase letter, lowercase letter, number or any miscellaneous symbol
//char - 1 byte
//int - 2 or 4 byte (depends on compiler)
//int>char size always
//lower size datatype to higher size datatype is possible (automatic, implicit type conversion) compiler automatically does it
//higher to lower forceful conversion is called coercion, explicit type conversion, type casting
//if elseif - mutually exclusive conditions
#include <stdio.h>
int main()
{
	char ipChar;
	int ascii;
	printf("\nEnter a character constant: ");
	scanf("%c"&ipChar);
	ascii=ipChar;
	if(ascii>=65 && ascii<=90) //&&-logical and means all conditions checked
	{
		printf("\n%c is an uppercase letter",ipChar);
	}
	else if(ascii>=97 && ascii<=122)
	{
		printf("\n%c is a lowercase letter",ipChar);
	}
	else if(ascii>=48 && ascii<=57)
	{
		printf("\n%c is a digit",ipChar);
	}
	else//last e else nathakle bas black screen... emni no problem
	{
		printf("\n%c is a miscellaneous symbol",ipChar);
	}
	return 0;
}
