#include <stdio.h>

int count_digit(int num)
{
    if (num == 0)
        return 1;

    int count = 0;
    while (num != 0)
    {
        num = num / 10;
        count = count + 1;
    }

    return count;
}

int     main()
{
    int GS1;
    int id_group;
    int code;
    int article_code;
    int cheffre_controle;

    do
    {
        printf("Enterz L'ISBN: ");
        scanf("%d - %d - %d - %d - %d",&GS1,&id_group,&code,&article_code,&cheffre_controle);

    } while (GS1 != 979 && GS1 != 978);

    int sum = count_digit(GS1) + count_digit(id_group) + count_digit(code) + count_digit(article_code) + count_digit(cheffre_controle);

    printf("chiffres: %d\n",sum);


    if (sum > 13)
    {
        printf("Invalid ISBN\n");
    }

    else if (sum < 13)
    {
        printf("ISBN must be 13 digits\n");
    }
    else
    {
            printf("Prefixe GS1 : %d\n",GS1);
            printf("Identifiant de groupe: %d\n",id_group);
            printf("Code de l'editeur : %d\n",code);
            printf("Numero d'article : %d\n",article_code);
            printf("Chiffre de controle: %d\n",cheffre_controle);
            
    }
        
    return 0;
}