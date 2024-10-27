//Default value of auto is garbage value.
#include<stdio.h>
void roll();
int main()
{
    auto int a=2;
    printf("%d\n",a);
    roll();
    return 0;
}
void roll()
{
    auto int a;
    printf("%d",a);
}