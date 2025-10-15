//lim n tend to 5 an=(25-n^2)/(5-n)
#include <stdio.h>
#include <math.h>
int main()
{
    double n=1.00,an=1.00; //initialize for gods sake
    while (n<5)
    {
        an=(25-pow(n,2))/(5-n);
        n+=0.0000001;
    }
    printf("\nThe limit at 5 is : %lf",an);
    return 0;
}
//basically the point of this loop is to make the compiler trippy when finding while
