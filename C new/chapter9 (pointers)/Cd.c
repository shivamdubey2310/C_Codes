//circularly shift values of a,b,c;
#include<stdio.h>
int fun(int *,int *,int *);
int main()
{
    int a,b,c;

    printf("\nEnter any three numbers to be shifted : ");
    scanf("%d%d%d",&a,&b,&c);

    printf("\nValues entered without shifting : ");
    printf("\n1st term : %d",a);
    printf("\n2nd term : %d",b);
    printf("\n3rd term : %d",c);

    fun(&a,&b,&c);

    
    printf("\nValues entered after shifting : ");
    printf("\n1st term : %d",a);
    printf("\n2nd term : %d",b);
    printf("\n3rd term : %d",c);
    return 0;
}

int fun(int *x,int *y,int *z)
{
    int t;

    t=*x;
    *x=*y;
    *y=*z;
    *z=t;
}