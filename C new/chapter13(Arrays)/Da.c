/*
Twenty-five numbers are entered from the keyboard into an
array. The number to be searched is entered through the
keyboard by the user. Write a program to find if the number to
be searched is present in the array and if it is present, display
the number of times it appears in the array.
*/
#include<stdio.h>
int main()
{
    int a[25],i,count=0,n;

    printf("\nEnter elements of array : ");
    for(i=0;i<24;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter number to search in the array : ");
    scanf("%d",&n);
    for (i = 0; i < 25; i++)
    {
        if (a[i]==n)
        {
            count++;
        }
    }
    printf("%d is repeated %d times in the array",n,count);
}
