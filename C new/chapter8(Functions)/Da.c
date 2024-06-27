//function to calculate factorial of a number entered through keyboard.

#include<stdio.h>
int facto(int);
int main()
{
    int fact,num;
    printf("\nENTER ANY NUMBER : ");
    scanf("%d",&num);
    fact=facto(num);
    printf("\nFACTORIAL OF %d IS  : %d",num,fact);
    return 0;
}

int facto(int x)
{
    int fac=1,i;

    for ( i = x; i >=1 ; i--)
    {
        fac=fac*i;
    }
    return (fac);
}