//pointer arithmetic (addition of pointers).
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},*p,*q;
    p=&a[0];
    q=&a[3];
   // p=p+1;
    //q=q+1;

    printf("%d",p);         //6422200
    printf("\n%d",&a);      //6422200
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //1
    printf("\n%d",q);       //6422212
    printf("\n%d",&p);      //6422296
    printf("\n%x",q);       //61fec4
    printf("\n%x",*q);      //4
    return 0;
}