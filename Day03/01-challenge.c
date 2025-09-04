#include <stdio.h>

int     main()
{
    int size;
    scanf("enter the size: %d ",&size);


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

    
}