//absolute value of a number.
#include<stdio.h>
int main()
{
    int a,b;

    printf("\nENTER ANY NUMBER : ");
    scanf("%d",&a);

    if (a>=0)
    {
        printf("\n%d IS ALREADY A POSITIVE NUMBER.",a);
    }
    else
    {
        b=a*(-1);
        printf("\n%d IS THE ABSOLUTE VALUE OF %d",b,a);
    }
    return 0;
}