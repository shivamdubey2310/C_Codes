//interest by formula a=p(1+r/q)^nq
#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float a,p,r,q,n;

    for(i=1;i<=10;i++)
    {
        printf("\nENTER DETAILS OF THE %d PERSON : ",i);
        printf("\nEnter PRINCIPAL AMOUNT : ");
        scanf("%f",&p);

        printf("\nEnter RATE OF INTEREST : ");
        scanf("%f",&r);

        printf("\nEnter NUMBER OF YEARS : ");
        scanf("%f",&n);

        printf("\nEnter the COMPOUNDING PERIOD : ");
        scanf("%f",&q);

        a=p*(pow((1+r/q),(n*q)));

        printf("\na=%f",a);
    }
    return 0;
}