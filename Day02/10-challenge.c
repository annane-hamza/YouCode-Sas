#include <stdio.h>

int scrabble(char mot[])
{
    int count = 0;
    int score = 0;

    while (mot[count] != '\0')
    {
        char c = mot[count];
    
        if (c >= 'a' && c <= 'z') 
            c = c - 'a' + 'A';

        
        if (c == 'A' || c == 'E' || c == 'I' || c == 'L' || c == 'N' || 
            c == 'O' || c == 'R' || c == 'S' || c == 'T' || c == 'U')
        {
            score += 1;
        }
        else if (c == 'D' || c == 'G')
        {
            score += 2;
        }
        else if (c == 'B' || c == 'C' || c == 'M' || c == 'P')
        {
            score += 3;
        }
        else if (c == 'F' || c == 'H' || c == 'V' || c == 'W' || c == 'Y')
        {
            score += 4;
        }
        else if (c == 'K')
        {
            score += 5;
        }
        else if (c == 'J' || c == 'X')
        {
            score += 8;
        }
        else if (c == 'Q' || c == 'Z')
        {
            score += 10;
        }

        count++;
    }

    return score;
}

int main()
{
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word);

    int total = scrabble(word);
    printf("Scrabble score: %d\n", total);

    return 0;
}
