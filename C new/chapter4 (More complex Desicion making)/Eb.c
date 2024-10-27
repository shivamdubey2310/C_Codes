//LEAP YEAR OR NOT.
#include<stdio.h>
int main()
{
    int yr;

    printf("\nEnter Any Year : ");
    scanf("%d",&yr);

    yr%100==0?(yr%400==0?printf("\nLEAP YEAR."):printf("\nNOT A LEAP YEAR.")):(yr%4==0?printf("\nLEAP YEAR"):printf("\nNOT A LEAP YEAR"));   
}