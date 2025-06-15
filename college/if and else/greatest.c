#include<stdio.h>
int main()
{
    int a,b,c; 

    printf("\n enter any number : ");
    scanf("%d\n%d\n%d",&a,&b,&c);

    if((a>b)&&(a>c))
    {
        printf("\n no.1 is greatest");
    }
    if((b>a)&&(b>c))
    {
        printf("\n no.2 is greatest");
    }
    if((c>a)&&(c>b))
    {
        printf("\n no.3 is greatest");
    }   
return 0;
}