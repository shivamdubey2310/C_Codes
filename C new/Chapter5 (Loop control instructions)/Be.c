//LIST OF ALL ARMSTRONG NUMBERS FROM 1 TO 500.
#include<stdio.h>
int main()
{
    int a,b,c,d,num=0,i=2;

    printf("List of all armstrong umbers from 1 to 500 : ");

    while (i<=500)
    {
        a=i/100;
        b=i%100;
        c=b/10;
        d=b%10;
        num=(a*a*a)+(c*c*c)+(d*d*d);
        if (num==i)
        {
            printf("\n%d",num);
        }
        i++;
    }
    return 0;
}