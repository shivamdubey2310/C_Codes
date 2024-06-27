//GREATEST AMONG THREE NUMBERS USING CONDITIONAL OPERATOR (?).
#include<stdio.h>
int main()
{
    int a,b,c,gre;

    printf("\n ENTER ANY THREE NUMBERS :");
    scanf("%d%d%d",&a,&b,&c);

    a>b?(a>c?printf("\n%d IS GREATEST.",a):printf("\n%d IS GREATEST.",c)):(b>c?printf("\n%d IS GREATEST.",b):printf("\n%d IS GREATEST.",c));
    return 0;
}