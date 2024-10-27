#include<stdio.h>
int main()
{
    int a,b,i,j,c,d,num[10],large=0;

    printf("\n ENTER ANY 10 NUMBERS : ");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }

    large=num[0];
    for ( i = 0; i < 10; i++)
    {
        if (num[i]>large)
        {
            large=num[i];
        }
    }
    printf("\n %d",large);
    
    large=num[0];
    for ( i = 0; i < 10; i++)
    {
        if (num[i]>large)
        {
            large=num[i];
        }
    }
    printf("\n %d",large);
    return 0;
}
