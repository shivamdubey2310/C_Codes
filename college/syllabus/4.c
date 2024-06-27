//Write a program to print any three digit number in reverse order.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,rev;

    printf("\n ENTER ANY 3 DIGIT NUMBER : ");
    scanf("%d",&a);

    b=a/100;
    c=a%100;
    d=c%10;
    e=c/10;
    rev=(d*100)+(e*10)+b;

    printf("\n REVERSE ORDER OF %d IS : %d ",a,rev);
    return 0;
}