//Write a program to check given number is positive or negative.
#include<stdio.h>
int main()
{
    int a,b;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);

    if(a<0)
    {
        printf("\n THE ENTERED NUMBER IS NEGATIVE! ");
    }
    else
        printf("\n THE ENTERED NUMBER IS POSITIVE! ");
    return 0;
}