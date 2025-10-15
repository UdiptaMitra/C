////statistical summary mean, variance and mean deviation
#include <stdio.h>
#include <math.h>
int main(){
    int n=0,i;
    printf("Number of inputs: ");
    scanf("%d",&n);
    float arr[n];
    float sum=0,mean=0,variance=0,meanDeviation=0,devSquare=0,dev=0;
    for(i=0;i<n;i++)
    {
        printf("arr[%d]: ",i);
        scanf("%f",&arr[i]);
    }
    //mean
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    mean=sum/n;
    //variance
    for(i=0;i<n;i++)
    {
        devSquare+=(arr[i]-mean)*(arr[i]-mean);
    }
    variance=devSquare/n;
    //mean deviation
    for(i=0;i<n;i++)
    {
        dev+=fabs(arr[i]-mean);
    }
    meanDeviation=dev/n;
    
    printf("Mean: %f\n",mean);
    printf("Variance: %f\n",variance);
    printf("Mean Deviation: %f\n",meanDeviation);
    return 0;
}
