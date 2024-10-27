//ADDITION OF TWO MATRICES.

#include<stdio.h>
int main()
{
    int i,j,a[i][j],b[i][j],c[i][j];

    printf("Enter elements of 1st matrix: ");

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix: ");
    
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
//ALTERNATIVE METHOD FOR ADDITION OF TWO MATRICES.

#include<stdio.h>
int main()
{
    int i,j,a[i][j],b[i][j],c[i][j];

    printf("Enter elements of 1st matrix: ");

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter elements of 2nd matrix: ");
    
    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for (i=0;i<2;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/