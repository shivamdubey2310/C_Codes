//Write a program to check given number is even or odd
#include<stdio.h>
int main()
{
    int a,b;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\n THE ENTERED NUMBER IS EVEN ");
    }
    else
        printf("\n THE ENTERED NUMBER IS ODD ");
    return 0;
}