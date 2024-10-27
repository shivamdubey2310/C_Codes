/*print addition of first seven terms of the series: 

1/2!+2/2!+3/3!+4/4!.....

*/
#include<stdio.h>
int main()
{
    int a,d,i,j;
    float b=0.0,c=0.0,fact=1.0;

    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j<=1; j++)
        {
            fact=fact*j;
        }
        b=i/fact;
        c=c+b;
        fact=1.0;
        b=0.0;
    }
    printf("\n%f",c);
    return 0;
}
/*
OUTPUT:-
28.000000
*/