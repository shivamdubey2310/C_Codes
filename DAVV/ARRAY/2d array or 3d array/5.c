//WAP TO PRINT MULTIPLICATION OF TWO MATRICES.

#include<stdio.h>
int main()
{
    int i,j,a[i][j],b[i][j],c[i][j],sum=0;

    printf("\n ENTER ELEMENTS OF 1st MATRIX : ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nENTER ELEMENTS OF 2nd MATRIX : ");

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=a[i][j]*b[i][j];
        }
    }
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",c[i][j]);
        }
    }
    
}