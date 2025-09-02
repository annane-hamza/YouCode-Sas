#include <stdio.h>

int     main()
{
    // ((((3x+2)x–5)x–1)x+7)x–6

    int x;
    int poly;

    printf("X: ");
    scanf("%d",&x);

    poly = ((((3*x+2)* x - 5)* x - 1)* x + 7) * x - 6;

    printf("la valeur du polynome: %d\n",poly);

    return 0;
}