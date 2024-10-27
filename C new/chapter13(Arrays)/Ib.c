/*If an array arr contains n elements, then write a program to
check if arr[0] = arr[n-1], arr[1] = arr[n-2] and so on.*/
#include<stdio.h>
int main()
{
    int n,a[n],i,j;

    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    printf("\nEnter elements of array : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        if (a[i]==a[(n-1)-i])
        {
            printf("\na[%d]%d=a[%d]%d",i,a[i],(n-1)-i,a[(n-1)-i]);
        }
        else
        {
            printf("\na[%d]%d!=a[%d]%d",i,a[i],(n-1)-i,a[(n-1)-i]);
        }
    }
    
}