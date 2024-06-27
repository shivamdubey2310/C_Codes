//minimum number of coins for an amount.

#include<stdio.h>
int coin(int,int);

int main()
{
    int a,b,c,amo;

    printf("\nEnter the amount  : ");
    scanf("%d",&amo);               //4999

    amo=coin(amo,2000);             //4999,2000             2
    amo=coin(amo,500);              //999,500               1
    amo=coin(amo,100);              //499,100               4
    amo=coin(amo,50);               //99,50                 1
    amo=coin(amo,10);               //49,10                 4
    amo=coin(amo,5);                //9,5                   1
    amo=coin(amo,2);                //4,2                   2
    amo=coin(amo,1);                //0,1                   0
}

int coin(int x,int y)
{
    int j,i,k=0,l;

    j=x/y;

    for ( i = 1; i <= j; i++)
    {
        k++;   
    }
    printf(" no. of %d notes : %d\n",y,k);
    return (x-y*j);             //in first call:500 in second call:50 
}

// alternate method using loop.
/*
#include<stdio.h>
int main()
{
    int amount,i;

    printf("\nEnter the amount  : ");
    scanf("%d",&amount);               //4999
    
    while (amount!=0)
    {
        if (amount/2000!=0)
        {
            printf("\nNo. of 2000 Rs. notes required : %d",amount/2000);
            amount=amount%2000;
        }
        if (amount/500!=0)
        {
            printf("\nNo. of 500 Rs. notes required : %d",amount/500);
            amount=amount%500;
        }
        if (amount/100!=0)
        {
            printf("\nNo. of 100 Rs. notes required : %d",amount/100);
            amount=amount%100;
        }
        if (amount/50!=0)
        {
            printf("\nNo. of 50 Rs. notes required : %d",amount/50);
            amount=amount%50;
        }
        if (amount/10!=0)
        {
            printf("\nNo. of 10 Rs. notes required : %d",amount/10);
            amount=amount%10;
        }
        if (amount/5!=0)
        {
            printf("\nNo. of 5 Rs. coins required : %d",amount/5);
            amount=amount%5;
        }
        if (amount/2!=0)
        {
            printf("\nNo. of 2 Rs. coins required : %d",amount/2);
            amount=amount%2;
        }
        if (amount/1!=0)
        {
            printf("\nNo. of 1 Rs. coins required : %d",amount/1);
            amount=amount%1;
        }
    }
    return 0;
}
*/