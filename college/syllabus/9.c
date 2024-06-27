//Write a program to check given year is leap year or not
#include<stdio.h>
int main()
{
    int year;

    printf(" ENTER ANY NUMBER : ");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("%d IS A LEAP YEAR.",year);
    }
    else
    {
        printf("%d IS NOT A LEAP YEAR.",year);
    }
    return 0;
}