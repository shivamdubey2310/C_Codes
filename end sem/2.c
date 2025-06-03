#include<stdio.h>
int main()
{
    int a=12,b=5;

    printf("%d\n",a&b);
    printf("%d\n",a|b);
    printf("%d\n",a^b);
    printf("%d\n",a+b&&b+1||0&&b++);
    //c=a>>4;
   // printf("%d",c);
    return 0;
}