#include <stdio.h>
#define PI 3.14

int main() {
    
    int rayon = 10;
    float v;

    // using 4/3
    v = (4/3) * PI * rayon * rayon * rayon; // 4 / 3 = 1
    printf("Volume in the first case = %f \n",v);

    // using 4.0 / 3.0 
    v = (4.0/3.0) * PI * rayon * rayon * rayon; // 4.0 / 3.0 = 1.33
    printf("Volume in the second case = %f \n",v);

    return 0;
}
