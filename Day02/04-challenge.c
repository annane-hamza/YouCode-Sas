#include <stdio.h>

int main() {
    int note;

    printf("Entrez une note numérique: ");
    scanf("%d", &note);

    if(note < 0 || note > 100) {
        printf("Note invalide!\n");
        return 1;
    }

    switch (note / 10) {
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }

    return 0;
}
