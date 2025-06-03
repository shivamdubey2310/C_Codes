#include<stdio.h>
int factorial(int x);
int main()
{
    int a,fact;

    printf("ENTER ANY NUMBER :");
    scanf("%d",&a);

    fact=factorial(a);
    printf("\nFACTORIAL VALUE = %d ",fact);
    return 0;
}

int factorial(int x)
{
    int f=1,i;

    for(i=x;i>=1;i--)
    f=f*i;
    return(f);
} 