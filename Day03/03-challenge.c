#include <stdio.h>

/*
Écrivez une fonction nommée updateScore qui prend :

Un tableau d'entiers représentant les scores de 5 joueurs
Un numéro de joueur (1 à 5)
Une nouvelle valeur de score
La fonction doit mettre à jour le score du joueur spécifié, puis afficher tous les scores au format :
« Scores : [score1, score2, score3, score4, score5] »

N'oubliez pas qu'en C, les tableaux sont indexés à 0 ; le joueur 1 correspond donc à l'index 0.

*/

void    updateScore(int scores[],int joueur , int nouvelle_valeur)
{
    scores[joueur - 1] = nouvelle_valeur;

    for (int i = 0 ; i < 5 ; i++)
    {
        printf(" %d ",scores[i]);
    }

    printf("\n");
}

int     main()
{
    int scores[5];

    for (int i = 0 ; i < 5 ; i++)
    {
        printf("joueur [%d]: ",i + 1);
        scanf("%d",&scores[i]);
    }

    int joueur , nouvelle_valeur ;

    printf("entrer numro de joueur: ");
    scanf("%d",&joueur);

    printf("entrer nouvelle valeur de score: ");
    scanf("%d",&nouvelle_valeur);

    updateScore(scores,joueur,nouvelle_valeur);


}