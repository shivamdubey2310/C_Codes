//Function to check given year is leap year or not.
#include<stdio.h>
void leap(int);

int main()
{
    int yr;

    printf("\nEnter the year : ");
    scanf("%d",&yr);               
    leap(yr);
    return 0;
}
void leap(int x)
{
    if (x%4==0)
    {
        printf("\n%d IS A LEAP YEAR.",x);
    }
    else
    printf("\n%d is not a leap year.",x);
}