#include <stdio.h>

int     main()
{
   

    int arr[8] = {9,3,2,9,7,7,-1,-1};

    for (int i = 0 ; i < 8 ; i++)
    {
        int count = 1 ;
        if (arr[i] == -99999)
            continue;
        
        for (int j = i + 1 ; j < 8 ; j++ )
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -99999;
            }
        }

        if (count > 1)
        {
            printf(" %d ",arr[i]);
        }
    }

    printf("\n");

    return 0;
}