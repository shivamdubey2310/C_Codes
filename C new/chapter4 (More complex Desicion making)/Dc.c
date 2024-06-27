//whether the triangle is valid or not. 
#include<stdio.h>
int main()
{
    float a,b,c,gre,sum;

    printf("\n ENTER THREE SIDES OF A TRAINGLE : ");
    printf("\nSIDE1 : ");
    scanf("%f",&a);
    printf("\nSIDE2 : ");
    scanf("%f",&b);
    printf("\nSIDE3 : ");
    scanf("%f",&c);

    if ((a>b)&&(a>c))
    {
        gre=a;
        sum=b+c;
    }
    else if ((b>a)&&(b>c))
    {
        gre=b;
        sum=a+c;
    }
    else if ((c>a)&&(c>b))
    {
        gre=c;
        sum=b+a;
    }
    if (sum>gre)
    {
        printf("\nTHE TRIANGLE IS VALID ! ");
    }
    else
    {
        printf("\nTHE TRIANGLE IS NOT VALID !");
    }
    return 0;
}