// Write a program to print Fibonacci series.

#include<stdio.h>
int main()
{
    int n,t1=0,t2=1,next,i;

    printf("\n ENTER THE NUMBER OF TERM : ");
    scanf("%d",&n);

    next=t1+t2;
    
    printf("FIBONACCI SERIES : %d %d",t1,t2);

    for(i=3;i<=n;i++)
    {
        printf("\n%d",next);

        t1=t2;
       t2=next;
        next=t1+t2;
    }
    return 0;
}