#include <stdio.h>
#include <string.h>

#define MAX_ETUDIANTS 30
#define MAX_NOTES 4

struct Etudiant {
    char cne[20];
    char nom[40];
    char prenom[40];
    float notes[MAX_NOTES];
    float moyenne;
};

struct Etudiant classe[MAX_ETUDIANTS];

int main() {
    
    int choix;

        printf("\n--- Menu ---\n");
        printf("1) Ajouter un etudiant\n");
        printf("2) Saisir les notes d'un etudiant\n");
        printf("3) Afficher tous les etudiants\n");
        printf("4) Afficher bulletin d'un etudiant\n");
        printf("5) Calculer la moyenne generale\n");
        printf("0) Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

    return 0;
}
