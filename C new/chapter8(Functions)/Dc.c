//year(in decimals) to ROMAN equivalent.(copied from solutions)

#include<stdio.h>
int roman(int,int,char);

int main()
{
    int yr;

    printf("\nEnter year : ");
    scanf("%d",&yr);

    yr=roman(yr,1000,'m');   //Series of function calls.
    yr=roman(yr,500,'d');
    yr=roman(yr,100,'c');
    yr=roman(yr,50,'l');
    yr=roman(yr,10,'x');
    yr=roman(yr,5,'v');
    yr=roman(yr,1,'i');

    return 0;
}

int roman(int y,int k,char ch)
{
    int i,j;

    if (y==9)
    {
        printf("ix");
        return (y%9);
    }
    if (y==4)
    {
        printf("iv");
        return (y%4);
    }
    j=y/k;

    for ( i = 1; i <= j; i++)
    {
        printf("%c",ch);
    }
    return (y-k*j);
}