//Default value of register is garbage value.
#include<stdio.h>
void new();
int main()
{
    register int a=20;

    printf("%d",a);
    new();
    return 0;
}
void new()
{
    register int a;
    printf("\n%d",a);
}