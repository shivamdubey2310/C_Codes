// Write a program to swap any two numbers without using any third variable.

#include<stdio.h>
int main()
{
    int a,b;

    printf("\n ENTER ANY TWO NUMBERS : ");
    scanf("%d%d",&a,&b);
    
    a=a+b;
    b=a-b;
    a=a-b;

    printf("\n SWAPPED ORDER IS : %d %d ",a,b);
    return 0;
}