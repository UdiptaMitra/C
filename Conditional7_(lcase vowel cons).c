//WAPC to a character in lowercase. Check and print if the character is a vowel or consonant.
#include <stdio.h>
int main()
{
	char letter;
	printf("Enter a lowercase letter: ");
	scanf("%c",&letter);
	if (letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u') //|| - logical and pipe symbol, any one condition true, rest are not checked, one true, output true
	{
		printf("\n%c is a vowel",letter);
	}
	else
	{
		printf("\n%c is a consonant",letter);
	}
	return 0;
}
// 'e' - single character constant (has some ascii value)
// "e" - string constant (no concept of ascii value)
