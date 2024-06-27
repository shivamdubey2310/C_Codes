//Find the smallest number in an array using pointers.
#include<stdio.h>
int main()
{
    int n,a[25],i,j;
    printf("\nEnter elements of array : ");
    for ( i = 0; i < 25; i++)
    {
        scanf("%d",&a[i]);
    }
    n=*a;
    for ( i = 0; i <25; i++)
    {
        if (*(a+i)<n)
        {
            n=*(a+i);
        }
       
    }
    printf("\nSmallest number in array is %d",n);
}