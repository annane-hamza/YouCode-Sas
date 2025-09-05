#include<stdio.h>

int main() {
    float m, taux, paiement, mois1, mois2, mois3;

    printf("Entrez le montant du pret : \n");
    scanf("%f", &m);
    printf("Entrez le taux d'interet  : \n");
    scanf("%f", &taux);
    printf("Entrez le paiement mensule : \n");
    scanf("%f", &paiement);

    mois1 = m - paiement + (m * taux/12 /100);
    mois2 = mois1 - paiement + (mois1 * taux/12 /100);
    mois3 = mois2 - paiement + (mois2 * taux/12 /100);

    printf("Solde restant apres le premier paiment est : %.2f\n", mois1);
    printf("Solde restant apres le deuxeme paiment est : %.2f\n", mois2);
    printf("Solde restant apres le troiseme paiment est : %.2f\n", mois3);

    return 0;
}
