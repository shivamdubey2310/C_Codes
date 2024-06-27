//WAP to copy the contents elements of an array 
//to another array in reverse order.
#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;

    printf("\nEnter elements of array : ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0,j=4; i < 5,j>=0; i++,j--)
    {
        b[j]=a[i];
    }
    for ( i = 0; i <5 ; i++)
    {
        printf("\n%d",b[i]);
    }
    
    
}