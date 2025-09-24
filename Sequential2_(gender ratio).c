/*WAPC to input no of males and females in a region. 
Calculate and display the gender ratio*/

#include<stdio.h>//standard input output header file which contains built in function printf scanf etc.

int main()
{
	int male, female;//at this point they contain garbage values //donot put unsigned.. its format specifier is different
	float ratio;//why not double...  too much waste of space here      
	printf("\nEnter no of males in the region: ");//'\n' is escape sequence for new line
	scanf("%d",&male);//& helps to find address of that variable location
	printf("\nEnter no of females in the region: ");
	scanf("%d",&female);//%d  is format specifier for int(use quotation)
	ratio=(float)male/female; //explicit type conversion(type casting) male int to float, implicit type conversion female also to float(operand must be same type... 
    //higher order e convert hoyegelo female ta...promoted)
	printf("\nThe gender ratio is %.2f",ratio);//%f  is format specifier for float(use quotation)
	return 0;
}
//variable declaration at beginning of program
//float(single precision floating point) - 6 places 
//double - 14 places 
//f- formatted
//format specifier er place e number ta bose
//the answer is coming 25/23=1.000000 but thats not correct as male/female is int as both are int
//%.2f specifies 2 places after decimal point


