// Write a program to swap any two numbers using any third variable.

#include<stdio.h>
int main()
{
    int a,b,c;

    printf("\n ENTER ANY TWO NUMBERS : ");
    scanf("%d%d",&a,&b);
    
    c=a;
    a=b;
    b=c;

    printf("\n SWAPPED ORDER IS : %d %d ",a,b);
    return 0;
}