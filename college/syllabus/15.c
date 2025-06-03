// WRITE A PROGRAM TO CALCULATE FACTORIAL OF A GIVEN NUMBER.

#include<stdio.h>
int main()
{
    int a,i,fact=1;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}
