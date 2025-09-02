#include <stdio.h>

int     main()
{
    float price;

    printf("entrer un montant: ");
    scanf("%f",&price);

    float tax = (price * 0.05);

    printf("Avec taxe ajoutee: $%.2f \n",price + tax);

    return 0;
}