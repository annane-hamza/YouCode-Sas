#include <stdio.h>

int rev_number(int num)
{
    int rev = 0;

    while (num != 0)
    {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    return rev;
}

int main()
{
    int num;

    printf("Entrez un nombre a deux chiffres: ");
    scanf("%d",&num);

    printf("Le nombre inverse est : %d \n",rev_number(num));

    return 0;

}