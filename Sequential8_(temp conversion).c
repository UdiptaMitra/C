//WAPC to input the temperature in Celsius and output it in Fahrenheit.
#include <stdio.h>
int main()
{
    float celcius,fahrenheit;
    printf("Input a temperature value in celcius: ");
    scanf("%f",&celcius);
    fahrenheit=(celcius*9/5)+32;
    printf("The temperature value in fahrenheiet is %f",fahrenheit);
    return 0;
}
