#include <stdio.h>

int     main()
{
    int montant;
    int Billets_20;
    int Billets_10;
    int Billets_5;
    int Billets_1;
    int rest;

    printf("Entrez un montant en dollars :");
    scanf("%d",&montant);

    Billets_20 = montant / 20; 

    rest = montant % 20; 
    Billets_10 =  rest / 10; 

    rest = rest % 10; 

    Billets_5 = rest / 5; 
    rest = rest % 5 ;

    Billets_1 = rest; 


    printf("20: %d\n",Billets_20);
    printf("10: %d\n",Billets_10);
    printf("5: %d\n",Billets_5);
    printf("1: %d\n",Billets_1);

    return 0;

}