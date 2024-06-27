//pointer to pointer(double pointer)

#include<stdio.h>
int main()
{
    int a=10,*p,**q;
    p=&a;
    q=&p;
    printf("%d",p);         //6422216
    printf("\n%d",&a);      //6422216
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //a
    printf("\n%d",q);       //6422216
    printf("\n%d",&p);      //6422216
    printf("\n%x",q);       //61fec4
    printf("\n%x",*q);      //61fec8
    return 0;
}