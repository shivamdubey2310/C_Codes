#include<stdio.h>
int main()
{
    int a[5][5],i,n,j,l;
    printf("Enter Element Of Matrices");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    l=a[i][j];
    printf("Output\n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d",&a[i][j]);
            if(l<a[i][j])
            {
            l=a[i][j];
            }
        }
    printf("\n");
    }
    printf("largest no. is %d",l);
    return 0;
}
