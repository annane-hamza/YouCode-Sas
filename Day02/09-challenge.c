#include <stdio.h>

int     main()
{
    char number[100];

    printf("Entrez un numéro de téléphone: ");
    scanf("%s",&number);
    
    
    int count = 0;

    while(number[count] != '\0')
    {
        if (number[count] == 'A' || number[count] == 'B' || number[count] == 'C')
        {
            printf("2");
        }
        else if (number[count] == 'D' || number[count] == 'E' || number[count] == 'F')
        {
            printf("3");
        }
        else if (number[count] == 'G' || number[count] == 'H' || number[count] == 'I')
        {
            printf("4");
        }
        else if (number[count] == 'J' || number[count] == 'K' || number[count] == 'L')
        {
            printf("5");
        }

        else if (number[count] == 'M' || number[count] == 'N' || number[count] == 'O')
        {
            printf("6");
        }
        else if (number[count] == 'P' || number[count] == 'R' || number[count] == 'S')
        {
            printf("7");
        }

        else if (number[count] == 'T' || number[count] == 'U' || number[count] == 'V')
        {
            printf("8");
        }

        else if (number[count] == 'W' || number[count] == 'X' || number[count] == 'Y')
        {
            printf("9");
        }
        else
            printf("%c",number[count]);

        count++;
    }

    return 0;
}