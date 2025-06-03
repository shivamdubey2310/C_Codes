// A NUMBER RAISE TO POWER ANOTHER.
#include<stdio.h>
int main()
{
    int a,b,i,num=1;

    printf("ENTER BASE NUMBER : ");
    scanf("%d",&a);

    printf("ENTER EXPONENTIAL NUMBER : ");
    scanf("%d",&b);

    for(i=1;i<=b;i++)
    {
        num=num*a;
    }

    printf("%d^%d=%d",a,b,num);
    return 0;

}