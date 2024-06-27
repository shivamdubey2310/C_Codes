#include<stdio.h>
void sum()
{
    int a,b,sum=0;

    printf("enter any number : ");
    scanf("%d%d",&a,&b);

    sum=a+b;

    printf("\n%d",sum);
}

int main()
{
    sum();
}