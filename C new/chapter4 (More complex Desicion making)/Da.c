//leap year or not.
#include<stdio.h>
int main()
{
    int a;

    printf("\nENTER ANY YEAR : ");
    scanf("%d",&a);

    if ((a%400==0)||(a%100==0)&&(a%4==0))
    {
        printf("\n %d IS A LEAP YEAR !",a);
    }
    else
    {
        printf("\n %d IS A NOT LEAP YEAR !",a);
    }
    return 0;
}