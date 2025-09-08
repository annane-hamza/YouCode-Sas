#include <stdio.h>

#define MAX_NOTES 100

float notes[MAX_NOTES];
int nbNotes = 0;
int track_notes = 0;




void saisirNotes(float notes[])
{
    printf("Combien de notes (1..%d) ? ", MAX_NOTES);
    scanf("%d",&nbNotes);

    if (nbNotes < 1 || nbNotes > MAX_NOTES)   
    {
        printf("Valeur invalide, veuillez reessayer.\n");
        return; 
    }

    for (int i = 0 ; i < nbNotes ; i++)
    {
        do {
            printf("Note [%d] (0 - 20) : ", i+1);
            scanf("%f",&notes[i]);

            if (notes[i] < 0 || notes[i] > 20) {
                printf("La note doit etre comprise entre 0 et 20.\n");
            }
        } while (notes[i] < 0 || notes[i] > 20);
    }

    track_notes = 1;
    printf("Notes ajoutees avec succes.\n");
}

void afficherNotes(float notes[])
{
    if (!track_notes || nbNotes == 0) {
        printf("Aucune note n'a ete saisie.\n");
        return;
    }

    printf("\n===== Liste des notes =====\n");
    for (int i = 0; i < nbNotes; i++) {
        printf("Etudiant [%d] : %.2f\n", i+1, notes[i]);
    }
    printf("===========================\n\n");
}

float calculerMoyenne(float notes[], int n)
{
    if (n == 0) return 0;

    float somme = 0;
    for (int i = 0; i < n; i++) {
        somme += notes[i];
    }
    return somme / n;
}

float trouverMax(float notes[], int n)
{
    if (n == 0) return 0;

    float max = notes[0];
    for (int i = 1; i < n; i++) {
        if (notes[i] > max) {
            max = notes[i];
        }
    }
    return max;
}

float trouverMin(float notes[], int n)
{
    if (n == 0) return 0;

    float min = notes[0];
    for (int i = 1; i < n; i++) {
        if (notes[i] < min) {
            min = notes[i];
        }
    }
    return min;
}

void afficherAdmisNonAdmis(float notes[], int n)
{
    if (n == 0) {
        printf("Aucune note n'a ete saisie.\n");
        return;
    }

    printf("\n--- Liste des etudiants admis (note >= 10) ---\n");
    int admisExiste = 0;
    for (int i = 0; i < n; i++) {
        if (notes[i] >= 10) {
            printf("Etudiant [%d] : %.2f\n", i+1, notes[i]);
            admisExiste = 1;
        }
    }
    if (!admisExiste) {
        printf("Aucun etudiant admis.\n");
    }

    printf("\n--- Liste des etudiants non admis (note < 10) ---\n");
    int nonAdmisExiste = 0;
    for (int i = 0; i < n; i++) {
        if (notes[i] < 10) {
            printf("Etudiant [%d] : %.2f\n", i+1, notes[i]);
            nonAdmisExiste = 1;
        }
    }
    if (!nonAdmisExiste) {
        printf("Aucun etudiant non admis.\n");
    }
}

void ajouterNote(float notes[])
{
    if (nbNotes >= MAX_NOTES) {
        printf("Impossible d'ajouter une nouvelle note (limite atteinte).\n");
        return;
    }

    float nouvelleNote;
    do {
        printf("Entrez la nouvelle note (0 - 20) : ");
        scanf("%f", &nouvelleNote);

        if (nouvelleNote < 0 || nouvelleNote > 20) {
            printf("La note doit être comprise entre 0 et 20.\n");
        }
    } while (nouvelleNote < 0 || nouvelleNote > 20);

    notes[nbNotes] = nouvelleNote;
    nbNotes++;
    track_notes = 1;

    printf("Nouvelle note ajoutée avec succès.\n");
}

int modifierNote(float notes[], int n)
{
    int index;
    float nouvelleValeur;

    printf("index (0..%d): ", n-1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Index invalide.\n");
        return -1;
    }

    printf("update note: ");
    scanf("%f", &nouvelleValeur);

    if (nouvelleValeur < 0 || nouvelleValeur > 20) {
        printf("Valeur invalide.\n");
        return -1;
    }

    notes[index] = nouvelleValeur;
    printf("Note modifiee avec succes.\n");

    return 0;
}

int supprimerNote(float notes[], int n)
{
    int index;

    if (n == 0) {
        printf("Aucune note a supprimer.\n");
        return n; 
    }

    printf("Index de la note a supprimer (0..%d): ", n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= n) {
        printf("Index invalide.\n");
        return n; 
    }

    
    for (int i = index; i < n - 1; i++) {
        notes[i] = notes[i + 1];
    }

    printf("Note supprimae avec succès.\n");

    return n - 1;
}



int main()
{
    int choice;
    do
    {
        printf("\n++++++++++++++++++++++++++++++++++++++++++\n");
        printf("          Gestion des Notes Etudiant        \n");
        printf("+++++++++++++++++++++++++++++++++++++++++++++\n");
        printf("1) Saisir N notes\n");
        printf("2) Afficher les notes\n");
        printf("3) Statistiques\n");
        printf("4) Ajouter une note\n");
        printf("5) Modifier une note\n");
        printf("6) Supprimer une note\n");
        printf("0) Quitter\n");
        printf("----------------------------------------------\n");
        printf("Votre choix : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            saisirNotes(notes);
            break;
        case 2:
            afficherNotes(notes);
            break;
        case 3:
            printf("\n===== Statistiques =====\n");
            printf("Moyenne : %.2f\n", calculerMoyenne(notes, nbNotes));
            printf("Note maximale : %.2f\n", trouverMax(notes, nbNotes));
            printf("Note minimale : %.2f\n", trouverMin(notes, nbNotes));
            afficherAdmisNonAdmis(notes, nbNotes);
            printf("========================\n\n");
            break;
        case 4:
            ajouterNote(notes);
            break;
        case 5:
            modifierNote(notes,nbNotes);
            break;
        case 6:
            supprimerNote(notes,nbNotes);
            break;
            
        default:
            break;
        }
    } while (choice != 0);

    printf("\n Merci d avoir utilise le programme. Au revoir !\n");

    return 0;
}