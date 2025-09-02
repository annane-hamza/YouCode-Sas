#include <stdio.h>
#define PI 3.14

int main() {
    
    float rayon;
    float v;

    printf("enter the rayon: ");
    scanf("%f",&rayon);

    v = (4.0/3.0) * PI * rayon * rayon * rayon;
    printf("V = %f \n",v);

    return 0;
}
