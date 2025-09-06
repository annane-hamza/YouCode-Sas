#include <stdio.h>

int main() {
    printf("Taille de int : %zu octets\n", sizeof(int));
    printf("Taille de short : %zu octets\n", sizeof(short));
    printf("Taille de long : %zu octets\n", sizeof(long));
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de double : %zu octets\n", sizeof(double));
    printf("Taille de long double : %zu octets\n", sizeof(long double));

    return 0;
}
