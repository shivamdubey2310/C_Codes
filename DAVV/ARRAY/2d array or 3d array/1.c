// WAP TO PRINT ELEMENTS OF 2D ARRAY IN MATRIX FORM. 

#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum=0;

    printf("\nENTER 9 ELEMENTS : ");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}