#include<stdio.h>
int main()
{
    int p,c,m,e,h;
    float per;
    printf("ENTER THE MARKS OBTAINED IN P,C,M,E,H");
    scanf("%d%d%d%d%d",&p,&c,&m,&e,&h);
    per=(p+c+m+e+h)/5;
    printf("PERCENTAGE OBTAINED IS =%f\n",per);
    return 0;
}

