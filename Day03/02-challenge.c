#include <stdio.h>

/*
    Écrivez une fonction nommée getElement qui :

    Prend un tableau d'entiers et sa taille comme paramètres
    Prend un index comme paramètre
    Si l'index est valide (dans les limites du tableau), elle affiche l'élément correspondant à cet index
    Si l'index est invalide (hors limites du tableau), elle affiche « Index hors limites »

*/

void getElement(int tab[], int taille, int index)
{
    printf("vous avez entre l'index %d \n", index);

    if (index < 0 || index >= taille)
    {
        printf("Index hors limites\n");
    }

    else
    {
        printf("index %d found\n", index);
        printf("element = %d\n", tab[index]);
    }
}

int main()

{
    int taille;

    printf("taille: ");
    scanf("%d", &taille);

    int tab[taille];

    for (int i = 0; i < taille; i++)
    {
        printf("index[%d]: ", i);
        scanf("%d", &tab[i]);
    }

    printf(" tab:");

    for (int i = 0; i < taille; i++)
    {
        printf(" [index %d -> %d ]", i, tab[i]);
    }

    printf("\n");

    int index;

    printf("index: ");
    scanf("%d", &index);

    getElement(tab, taille, index);
}