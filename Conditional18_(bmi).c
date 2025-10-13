/*WAPC to do the following:
Input: height (m), weight (kg).
Calculate BMI = weight / (height²).
Classify:
BMI < 18.5 ? Underweight
18.5 = BMI < 25 ? Normal
25 = BMI < 30 ? Overweight
= 30 ? Obese
If overweight or obese and age > 40 ? print "Consult doctor"*/

#include <stdio.h>

int main()
{
    float height, weight,bmi;
    int age,ageFlag=0,bmiFlag=0;
    printf("Input the height and weight of the person: ");
    scanf("%f %f",&height,&weight);
    bmi=weight/(height*height);
    printf("Input the age of the person: ");
    scanf("%d",&age);
    if (bmi<18.25)
    {
        printf("Underweight");
    }
    else if ((bmi>=18.5)&&(bmi<25))
    {
        printf("Normal");
    }
    else if ((bmi>=25)&&(bmi<30))
    {
        printf("overweight");
        bmiFlag=1;
    }
    else if (bmi>=30)
    {
        printf("obese");
        bmiFlag=1;
    }
    if (age>40)
    {
        ageFlag=1;
    }
    if ((ageFlag==1)&&(bmiFlag==1))
    {
        printf("consult doctor");
    }
    return 0;
}
