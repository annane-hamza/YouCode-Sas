#include <stdio.h>
#define PI 3.14159265359

int main()
{
    double volume;
    double rayon;

    printf("Enter the radius of the sphere: ");
    scanf("%lf", &rayon);

    volume = (4.0/3.0) * PI * rayon * rayon * rayon;

    printf("The volume of the sphere with radius %.2lf is: %.2lf\n", rayon, volume);

    return 0;
}
