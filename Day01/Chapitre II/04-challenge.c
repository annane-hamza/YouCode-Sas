#include <stdio.h>

int     main()
{
    int montant ;

    printf("entrer un montant en dollar: ");
    scanf("%d",&montant);

    int tax = montant * 0.05;

    printf("Avec taxe ajoutée: $%d\n",montant + tax);

    return 0;
}