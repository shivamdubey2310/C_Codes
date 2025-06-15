//WAP TO SWAP TWO NUMBERS.
#include<stdio.h>
int main()
{
    int a,b;

    printf("\n ENTER ANY TWO NUMBERS");
    printf("\na : ");   //12
    scanf("%d",&a);
    printf("\nb : ");   //14
    scanf("%d",&b);

    a=a+b;  //a=26
    b=a-b;  //b=26-14=12;b=12
    a=a-b;  //a=26-12=14

    printf("\n SWAPPED ORDER IS %d AND %d",a,b);
    return 0;
}