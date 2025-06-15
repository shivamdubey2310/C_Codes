#include<stdio.h>
int main()
{
    int a,b,sum;
    char ano='y';

    while(ano=='y')
    {
        printf("\nenter two numbers:");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("\nsum of numbers %d and %d is: %d",a,b,sum);
        printf("\ndo you want to enter another numbers:y/n");
        fflush(stdin);
        scanf("%c",&ano);
    }
    return 0;
}