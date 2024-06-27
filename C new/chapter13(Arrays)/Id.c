/*
Write a program which performs the following tasks:
− initialize an integer array of 10 elements in main( )
− pass the entire array to a function modify( )
− in modify( ) multiply each element of array by 3
− return the control to main( ) and print the new array
elements in main( )*/
#include<stdio.h>
int modify(int *,int);
int main()
{
    int a[10],n,i,j;

    printf("\nEnter elements of array : ");
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("\n%d",a[i]);
    }
    modify(a,10);
    printf("\n\nModified array is : \n");
    for ( i = 0; i < 10; i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
int modify (int *a,int x)
{
    int i;
    for ( i = 0; i <x; i++)
    {
        *a=*a*3;
        a++;
    }
    
}