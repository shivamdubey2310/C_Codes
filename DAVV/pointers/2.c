//pointers and variables both should have same data type.

/*#include<stdio.h>
int main()
{
    int a,*p;
    p=&a;

    printf("%d",p);         //6422216
    printf("\n%d",&a);      //6422216
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //40
    return 0;
}*/
#include<stdio.h>
int main()
{
    int a;
    float *p;
    p=&a;

    printf("%d",p);         //6422216
    printf("\n%d",&a);      //6422216
    printf("\n%x",p);       //61fec8
    printf("\n%x",*p);      //0
    return 0;
}
