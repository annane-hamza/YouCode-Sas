#include <stdio.h>

int     main()
{
    // 3x5+2x4–5x3–x2+7x–6

    int x;
    int poly;

    printf("X: ");
    scanf("%d",&x);

    poly = (3*x*x*x*x*x) + (2*x*x*x*x) - (5*x*x*x) - (x * x) + (7 * x) - 6;

    printf("la valeur du polynome: %d\n",poly);

    return 0;
}