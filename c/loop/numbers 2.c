#include<stdio.h>
int main()
{
    int a,b,c=1;
    printf("\nENTER ANY NUMBER");
    scanf("%d",&a);
    while(c<=10)
    {
        b=a+c;
        printf("\n%d",b);
        c=c+1;
    }
    return 0;
}