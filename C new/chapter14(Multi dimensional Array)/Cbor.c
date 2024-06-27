/*Write a program to pick up the largest number from any 5 row
by 5 column matrix. (using pointer)*/
#include<stdio.h>
int fun(int *);
int main()
{
    int a[5][5],i,large,j;

    printf("\nEnter elements of array : ");
    for (i = 0; i <5; i++)
    {
        
        for ( j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix entered is :\n ");
    for (i = 0; i <5; i++)
    {
        
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t",*(*(a+i)+j));
        }
        printf("\n");
    } 
    fun(&a);
}    
int fun(int *a)
{
    int large=0,i,j;
    *a=large;
    for (i = 0; i <5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if ((*(a+i)+j)>=large)
            {
                large=(*(a+i)+j);
            }
        }
    }
    printf("\nlargest number : %d",large);
}