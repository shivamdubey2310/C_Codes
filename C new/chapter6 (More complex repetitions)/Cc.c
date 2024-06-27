//ALL POSSIBLE COMBINATIONS OF 1,2 AND 3.
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k;

    printf("\nALL POSSIBLE COMBINATIONS OF 1,2 AND 3 : ");

    for (i = 1; i <=3; i++)
    {
        for(j = 1;j <= 3; j++)
        {
            for(k = 1;k <= 3;k ++)
            {
                if (i==j||j==k||i==k)
                {
                    continue;
                }
                printf("\n%d%d%d",i,j,k);
            }
        }
    }
    return 0;
}
/*
OUTPUT:-
123
132
213
231
312
321
*/