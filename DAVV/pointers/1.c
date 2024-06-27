/*#include<stdio.h>
int main()
{
    int a=10,*p;

    p=&a;

    printf("%d",p);         //6422216
    printf("\n%d",&a);      //6422216
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //a
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a=10,*p;  // p will give error. *p should be used.
    p=&a;

    printf("%d",p);         //6422216
    printf("\n%d",&a);      //6422216
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //a
    return 0;
}