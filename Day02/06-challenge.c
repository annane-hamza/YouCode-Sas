#include <stdio.h>

int GCD(int a, int b)
{
    int rest;
    while (b != 0)
    {
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}

int main()

{
    int n1;
    int n2;

    printf("Entrez une fraction: ");
    scanf("%d/%d",&n1,&n2);

    int gcd = GCD(n1,n2);

    n1 = n1 / gcd;
    n2 = n2 / gcd;

    printf("Sous sa forme la plus simple : %d/%d\n",n1,n2);

    return 0;
}