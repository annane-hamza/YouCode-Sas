#include <stdio.h>
#define PI 3.14159265359

int main()
{
    double volume;
    int rayon = 10;

    volume = (4.0/3.0) * PI * rayon * rayon * rayon;

    printf("The volume of the sphere with radius %d is: %lf\n", rayon, volume);

    return 0;
}
