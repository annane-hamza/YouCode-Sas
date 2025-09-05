#include <stdio.h>

int main() {
    int x;
    int result;

    printf("Entrer la valeur de x: ");
    scanf("%d", &x);

    result = (3 * x * x * x * x * x)
           + (2 * x * x * x * x)
           - (5 * x * x * x)
           - (x * x)
           + (7 * x)
           - 6;

    printf("La valeur du polynome est: %d\n", result);

    return 0;
}
