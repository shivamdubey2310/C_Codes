#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5] ,i,j;
    printf("\n enter the value in first matrix");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\n value in second matrix");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    printf("\n sum of 2d in array");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d \t",c[i][j]);
        }
    printf("\t \t");
    }
    return 0;
    }