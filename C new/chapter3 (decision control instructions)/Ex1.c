#include<stdio.h>
int main()
{
    float pri,qty,total,dis,b,org;

    printf("\nENTER THE PRICE AND QUANTITY :");
    printf("\nPRICE : ");
    scanf("%f",&pri);
    printf("\nQUANTITY : ");
    scanf("%f",&qty);
    printf("\nPRICE AND QUANTITY ENTERED IS = %f AND %f",pri,qty);
    
    org=(pri*qty);

    if(org>1000)
    { 
        dis=org/10;
        total=org-dis;
        printf("\nCONGRATULATIONS YOU WON EXTRA 10 PERCENT DISCOUNT OF Rs.%f",dis);
        printf("\nAMOUNT BEFORE DISCOUNT : %f",org);
        printf("\nTOTAL PAYABLE AMOUNT : %f",total);
        printf("\nYOU SAVED Rs.%f",dis);
        printf("\nTHANK YOU,VISIT AGAIN!");
    }
    else
    {
        total=org;
        printf("\nTOTAL PAYABLE AMOUNT : %f",total);
    }
    return 0;
}