//WAPC to display prime numbers within a range entered by the user.

#include <stdio.h>
int main() 
{
    void prime(int startRange,int endRange);
    int startRange,endRange;
    printf("Enter the start range and end range for finding prime numbers within the range: ");
    scanf("%d %d",&startRange,&endRange);
    prime(startRange,endRange);
    return 0;
}
void prime(int startRange,int endRange)
{
    printf("\nThe numbers which prime are: \n");
    int i,j,count=0;
    for(i=startRange;i<=endRange;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
            {
                printf("\n%d",i);
            }
    }
}
