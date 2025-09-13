#include <stdio.h>

int     main()
{
    float x[100];
    int key;
    int n;
    int pos;

    // size
    printf("size: ");
    scanf("%d",&n);

    // read

    for (int i = 0 ; i < n ; i++)
    {
        printf("Value [%d]:" ,i);
        scanf("%f",&x[i]);
    }

    // to found

    printf("enter key to be found: ");
    scanf("%d",&key);

    // search for key
        pos = -1;
    for (int i = 0 ; i < n ; i++)
    {
        if (x[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        printf("the key %d not found\n",key);
    }

    else
        printf("the key: %d is found in pos: %d \n",key,pos);


}