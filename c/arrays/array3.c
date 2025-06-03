#include<stdio.h>
int main()
{
    int a[3][3],i,j;

    printf("\nENTER ELEMENTS OF MATRIX\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d\t",&a[i][j]);
        }  
       // printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
       // printf("\n");
    }
    return 0;
}