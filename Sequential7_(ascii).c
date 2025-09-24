//WAPC to input a character. Print its ASCII (American Standard Code for Information Interchange) value
/* digits - 48 to 57
 caps - 65 - 90
 lower - 97 to 122
 whitespace - 32 
 null - 0 (used to end all strings) */
 //all char have relation with integer as in ascii values
 #include <stdio.h>
 int main()
 {
 	char ipChar; //char single quotes; string is double quotes
 	printf("\nEnter a character constant: ");
 	scanf("%c",&ipChar); //%c is format specifier for char
 	printf("\nThe ASCII value of %c is %d", ipChar,ipChar);//represent a char by integer format specifier we get back the ascii value
 	return 0;//here type casting not required, assign it to an integer
 }
