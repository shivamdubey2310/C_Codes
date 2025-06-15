// WAP TO PRINT A MATRIX WITH ADDING PRECEDING TERM OF THAT ELEMENT.
// incomplete
#include<stdio.h>
int main()
{
    int i,j,a[3][3],sum[3][3]={0};

    printf("\nENTER 9 ELEMENTS : ");
    
    for(i=0;i<3;i++)
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
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=sum[i][j]+a[i][j];
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}