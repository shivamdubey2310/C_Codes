#include<stdio.h>
int main()
{
    int a[8]={1,2,3,4,5,6,7,8},*p,*q;
    p=&a[0];
    q=&a[3];

    printf("\n%d",a[0]);      //1
    printf("\n%d",p);         //6422184
    printf("\n%d",*p);        //1
    printf("\n%d",*q);        //4
    printf("\n%d",q);         //6422196

    p=p+1;
    q=q+1;

    printf("\n%d",*p);         //2
    printf("\n%d",*q);         //5
    return 0;
}