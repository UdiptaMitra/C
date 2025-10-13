/*WAPC to do the following:
Input: age, citizenship status (Y/N), criminal record (Y/N).
Eligible if: age = 18 and citizenship = Y and no criminal record.
If age = 60, print "Senior Citizen Eligible".
If not eligible, specify why.*/
#include <stdio.h>
int main()
{
    int age;
    char citizen, criminal;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizen);
    printf("Do you have a criminal record? (Y/N): ");
    scanf(" %c", &criminal);
    if (age >= 18 && (citizen == 'Y' || citizen == 'y') && (criminal == 'N' || criminal == 'n'))
    {
        if (age >= 60)
        {
            printf("Senior Citizen Eligible\n");
        }
        else
        {
            printf("Eligible\n");
        }
    }
    else
    {
        if (age>=60)
        {
            printf("Senior citizen eligible\n");
        }
        else if (age < 18)
        {
            printf("Not Eligible: Age below 18\n");
        }
        else if (citizen == 'N' || citizen == 'n')
        {
            printf("Not Eligible: Not a citizen\n");
        }
        else if (criminal == 'Y' || criminal == 'y')
        {
            printf("Not Eligible: Has criminal record\n");
        }
    }
    return 0;
}
