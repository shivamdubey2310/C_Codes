//We can not make variables using register storage class. 
//This program will not run.
#include<stdio.h>
int main()
{
    register int a=20;
    int *b;
    *b=&a;

    printf("%d",*b);
    return 0;
}