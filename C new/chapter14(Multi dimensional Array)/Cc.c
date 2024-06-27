/*Write a program to obtain transpose of a 4 x 4 matrix. The
transpose of a matrix is obtained by exchanging the elements
of each row with the elements of the corresponding column.*/
#include<stdio.h>
int main()
{
    int a[4][4],i,j,temp;

    printf("\nEnter elements of 1st row of the matrix : \n");
    for ( j= 0,i=0; j < 4; j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements of 2nd row of the matrix : \n");
    for ( j= 0,i=1; j < 4; j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements of 3rd row of the matrix : \n");
    for ( j= 0,i=2; j < 4; j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\nEnter elements of 4th row of the matrix : \n");
    for ( j= 0,i=3; j < 4; j++)
    {
        scanf("%d",&a[i][j]);
    }
    printf("\nEntered matrix : \n");
    for ( i= 0; i < 4; i++)
    {
        for ( j=0;j<4; j++)
        {
            printf("%d\t",a[i][j]);
        }    
        printf("\n");
    }

    for ( i = 0; i <4; i++)
    {
        for(j=i+1;j<4;j++)
        {
            temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    

    printf("\nTransposed matrix : \n");
    for ( i= 0; i < 4; i++)
    {
        for ( j=0;j<4; j++)
        {
            printf("%d\t",a[i][j]);
        }    
        printf("\n");
    }
    return 0;
}