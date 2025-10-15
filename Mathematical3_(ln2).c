//log_e(2)=1-1/2+1/3_1/4+....
#include <stdio.h>
#include <math.h>

int main()
{
    double eps = 1.0, sncurrent = 0.0, snprev = 0.0;//initialisation necessary otherwise u play with garbage
    int n = 1;
    
    while (eps > 0.0000000001) //not use for loop nahole full term bar bar generate...meaningless
    {
        snprev = sncurrent;  // store previous partial sum
        if (n % 2 == 1)
            sncurrent += 1.0 / n;//1.0 for float
        else
            sncurrent -= 1.0 / n;

        eps = fabs(sncurrent - snprev); 
        n++;
    }

    printf("ln(2) is approximately %.10f\n", sncurrent);
    return 0;
}
