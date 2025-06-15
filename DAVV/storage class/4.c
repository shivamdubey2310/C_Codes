/*Default values of static storage class for :-
    int = 0
    float = 0.000000
    char = null
*/ 
#include<stdio.h>
void new();
int main()
{
    static int a=20;
    static float b=30.0;
    static char c='s';

    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
    new();
    return 0;
}
void new()
{
    static int a,b,c;
    printf("%d\n",a);
    printf("%f\n",b);
    printf("%c\n",c);
}