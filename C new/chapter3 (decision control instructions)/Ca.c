// PROFIT OR LOSS.
#include<stdio.h>
int main()
{
    float cp,sp,pro,loss;

    printf("\nENTER COST PRICE AND SELLING PRICE OF THE PRODUCT : ");
    printf("\nCOST PRICE : ");
    scanf("%f",&cp);
    printf("\nSELLING PRICE : ");
    scanf("%f",&sp);

    if (sp>cp)
    {
        pro=sp-cp;
        printf("\nYOU HAVE A PROFIT OF Rs.%f",pro);
    }
    else
    {
        loss=cp-sp;
        printf("\nYOU HAVE A LOSS OF Rs.%f",loss);
    }
    return 0;
}