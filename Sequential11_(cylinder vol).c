//WAPC to input radius and height of a cylinder. Calculate the volume of the cylinder.
#include <stdio.h>
#define PI 3.142 //defining of constant as another way in preprocessor (in caps) (not compulsory)

int main()
{
    float radius, height, cylinderVolume;
    printf("\nEnter radius and height: ");
    scanf("%f %f", &radius, &height);
    cylinderVolume = PI * radius * radius * height;
    printf("\nVolume of cylinder is %.2f", cylinderVolume);
    return 0;
}
