/*WAPC to accept the weight of a parcel in kilograms and calculate the rate per kilogram 
based on the following criteria: 
Weight in kilograms Rate per kilogram 
First 5 kilograms Rs. 800 
Next 5 kilograms Rs. 700 
Above 10 kilograms Rs. 500 
Also input the type of the courier (‘I’ for International and ‘D’ for Domestic). 
If the type of the courier is International, an additional amount of Rs. 1500 is levied.*/
#include <stdio.h>
int main()
{
    float weight, amount = 0;
    char courier_type;
    printf("\nEnter the weight of the parcel: ");
    scanf("%f", &weight);
    printf("\nEnter 'I' for International or 'D' for Domestic: ");
    scanf(" %c", &courier_type);  // space before %c to consume newline
    if (weight <= 5)
    {
        amount = 800 * weight;
    }
    else if (weight <= 10)
    {
        amount = 800 * 5 + (weight - 5) * 700;
    }
    else
    {
        amount = 800 * 5 + 700 * 5 + (weight - 10) * 500;
    }
    if (courier_type == 'I' || courier_type == 'i')
    {
        amount += 1500;
    }
    printf("\nThe final amount is: Rs. %.2f", amount);
    return 0;
}
