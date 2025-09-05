#include <stdio.h>

int main()
{
    int m1, j1, a1;
    int m2, j2, a2;

    printf("Entrez la premiere date (mm/jj/aa): ");
    scanf("%d/%d/%d", &m1, &j1, &a1);

    printf("Entrez la deuxieme date (mm/jj/aa): ");
    scanf("%d/%d/%d", &m2, &j2, &a2);

    if (m1 < 1 || m1 > 12 || m2 < 1 || m2 > 12 || j1 < 1 || j1 > 31 || j2 < 1 || j2 > 31)
    {
        printf("Date invalide!\n");
        return 1;
    }

    if (a1 < a2)
        printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m1, j1, a1, m2, j2, a2);
    else if (a1 > a2)
        printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m2, j2, a2, m1, j1, a1);
    else
    {
        if (m1 < m2)
            printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m1, j1, a1, m2, j2, a2);
        else if (m1 > m2)
            printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m2, j2, a2, m1, j1, a1);
        else
        {
            if (j1 < j2)
                printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m1, j1, a1, m2, j2, a2);
            else if (j1 > j2)
                printf("%02d/%02d/%02d est plus tot que %02d/%02d/%02d\n", m2, j2, a2, m1, j1, a1);
            else
                printf("Les deux dates sont identiques.\n");
        }
    }

    return 0;
}
