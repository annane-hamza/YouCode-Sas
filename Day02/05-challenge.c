#include <stdio.h>

void get_divisors(int n)
{
    printf("Diviseurs de %d : ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

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
    int n1, n2;

    printf("Entrez deux entiers: ");
    scanf("%d %d", &n1, &n2);

    
    get_divisors(n1);
    get_divisors(n2);

    
    printf("Le plus grand commun diviseur est : %d\n", GCD(n1, n2));

    return 0;
}
