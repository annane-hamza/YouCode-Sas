#include <stdio.h>
/*
    Créez une fonction nommée swapElements qui prend :

    Un tableau d'entiers
    La taille du tableau
    Deux indices : index1 et index2
    La fonction doit permuter les valeurs aux deux indices,
    puis afficher le tableau au format : « élément0 élément1 … élémentN ».

    Par exemple, si le tableau est [10, 20, 30, 40, 50]
    et que vous permutez les indices 1 et 3, le tableau résultant sera [10, 40, 30, 20, 50].
*/

void    swapElements(int tab[],int taille, int index1, int index2)
{
    int temp = tab[index1 - 1];
    tab[index1 - 1] = tab[index2 - 1];
    tab[index2 - 1] = temp;

    printf("After Swap: ");

    for (int i = 0 ; i < taille ; i++)
    {
        printf("[%d]",tab[i]);
    }

    printf("\n");
}

int main()
{
    int taille;

    int index1, index2;

    printf("taille: ");
    scanf("%d", &taille);

    int tab[taille];

    for (int i = 0; i < taille; i++)
    {
        printf("index[%d]: ", i + 1);
        scanf("%d", &tab[i]);
    }

    printf("Before Swap:");

    for (int i = 0; i < taille; i++)
    {
        printf(" [%d]",tab[i]);
    }

    printf("\n");

    printf("first element: ");
    scanf("%d",&index1);

    printf("second element:");
    scanf("%d",&index2);


    swapElements(tab,taille,index1,index2);
    

    return 0;
}