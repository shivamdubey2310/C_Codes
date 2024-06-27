#include<stdio.h>
int main()
{
    int a,b,c; 

    printf("\n enter the year : ");
    scanf("%d",&a);

    if(a%4==0)
    {
        printf("\n THIS IS LEAP A YEAR ");
    }
    else
    {
        printf("\n THIS IS NOT A LEAP YEAR ");
    }
return 0;
}