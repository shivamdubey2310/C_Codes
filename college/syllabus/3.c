//Write a program to find sum of individual digits of any three digits number.

#include<stdio.h>
int main()
{
    int a,b,c,d,e,sum;

    printf("\n ENTER ANY 3 DIGIT NUMBER : ");
    scanf("%d",&a);
    
    b=a/100;
    c=a%100;
    d=c/10;
    e=c%10;
    sum=b+d+e;
    printf("\n SUM OF INDIVIDUAL DIGITS OF THE NUMBER ENTERED IS : %d",sum);
    return 0;
}