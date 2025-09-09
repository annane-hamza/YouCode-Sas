#include <stdio.h>

#define MAX_ETUDIANTS 30
#define MAX_NOTES 4

struct Etudiant
{
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[MAX_NOTES];
    float moyenne;
};

struct Etudiant etudiants[MAX_ETUDIANTS];

int number_of_student = 0;


void ajouterEtudiant()
{
    if (number_of_student >= MAX_ETUDIANTS)
    {
        printf("Impossible d'ajouter plus d'etudiants (limite atteinte).\n");
        return;
    }

    printf("Entrer votre CNE: ");
    scanf("%s", etudiants[number_of_student].cne);
    printf("Entrer votre NOM: ");
    scanf("%s", etudiants[number_of_student].nom);
    printf("Entrer votre PRENOM: ");
    scanf("%s", etudiants[number_of_student].prenom);

    number_of_student++;
    printf("Etudiant ajoute avec succes.\n");
}


void saisirNotes()
{
    if (number_of_student == 0)
    {
        printf("Aucun etudiant enregistre.\n");
        return;
    }

    int numero;
    printf("Entrer ID de etudiant (0 a %d): ", number_of_student - 1);
    scanf("%d", &numero);

    if (numero < 0 || numero >= number_of_student)
    {
        printf("Numero invalide!\n");
        return;
    }

    printf("Entrer les notes de %s %s:\n", etudiants[numero].prenom, etudiants[numero].nom);

    for (int i = 0; i < MAX_NOTES; i++)
    {
        printf("Note N[%d]: ", i + 1);
        scanf("%f", &etudiants[numero].notes[i]);
    }
}

void calculerMoyenneEtudiant(int numero)
{
    if (numero < 0 || numero >= number_of_student)
    {
        printf("Numero invalide!\n");
        return;
    }

    float sum = 0;
    for (int i = 0; i < MAX_NOTES; i++)
    {
        sum += etudiants[numero].notes[i];
    }

    etudiants[numero].moyenne = sum / MAX_NOTES;
}


void calculerMoyenneGenerale()
{
    if (number_of_student == 0)
    {
        printf("Aucun etudiant enregistre.\n");
        return;
    }

    float sum = 0;
    int totalNotes = number_of_student * MAX_NOTES;

    for (int i = 0; i < number_of_student; i++)
    {
        for (int j = 0; j < MAX_NOTES; j++)
        {
            sum += etudiants[i].notes[j];
        }
    }

    float moyenneGenerale = sum / totalNotes;
    printf("La moyenne generale de la classe est: %.2f\n", moyenneGenerale);
}


void afficherEtudiants()
{
    if (number_of_student == 0)
    {
        printf("Aucun etudiant enregistre.\n");
        return;
    }

    printf("\n%-5s | %-15s | %-15s | %-15s\n", "ID", "CNE", "Prenom", "Nom");
    printf("-------------------------------------------------------------\n");

    for (int i = 0; i < number_of_student; i++)
    {
        printf("%-5d | %-15s | %-15s | %-15s\n",
               i,
               etudiants[i].cne,
               etudiants[i].prenom,
               etudiants[i].nom);
    }
}


void afficherBulletin()
{
    if (number_of_student == 0)
    {
        printf("Aucun etudiant enregistre.\n");
        return;
    }

    int numero;
    printf("Entrer le numero de l'etudiant (0 à %d): ", number_of_student - 1);
    scanf("%d", &numero);

    if (numero < 0 || numero >= number_of_student)
    {
        printf("Numero invalide!\n");
        return;
    }

    struct Etudiant e = etudiants[numero];

    printf("\n================ BULLETIN =================\n");
    printf("CNE     : %s\n", e.cne);
    printf("Nom     : %s\n", e.nom);
    printf("Prenom  : %s\n", e.prenom);
    printf("-------------------------------------------\n");

    for (int i = 0; i < MAX_NOTES; i++)
    {
        printf("Note [%d] : %.2f\n", i + 1, e.notes[i]);
    }

    printf("-------------------------------------------\n");


    calculerMoyenneEtudiant(numero);
    printf("Moyenne : %.2f\n", etudiants[numero].moyenne);
    printf("===========================================\n\n");

  
    calculerMoyenneGenerale();
}
int main()
{
    int choix;
    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Ajouter un etudiant\n");
        printf("2. Saisir les notes\n");
        printf("3. Afficher la liste des etudiants\n");
        printf("4. Afficher le bulletin d'un etudiant\n");
        printf("0. Quitter\n");
        printf("Choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajouterEtudiant();
            break;
        case 2:
            saisirNotes();
            break;
        case 3:
            afficherEtudiants();
            break;
        case 4:
            afficherBulletin();
            break;
        case 0:
            printf("Au revoir!\n");
            break;
        default:
            printf("Choix invalide!\n");
        }
    } while (choix != 0);

    return 0;
}
