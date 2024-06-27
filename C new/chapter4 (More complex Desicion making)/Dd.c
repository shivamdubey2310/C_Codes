//whether the triangle is isosceles,
//equilateral,scalene or a right angle triangle.  
#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;

    printf("\n ENTER THE SIDES OF A TRIANGLE : ");
    printf("\nside1 : ");
    scanf("%f",&a);
    printf("\nside2 : ");
    scanf("%f",&b);
    printf("\nside3 : ");
    scanf("%f",&c);

    if ((a==b)&&(a!=c))
    {
        printf("\n the given triangle is an ISOSCELES TRIANGLE!");
    }
    else if ((b==c)&&(b!=a))
    {
        printf("\n the given triangle is an ISOSCELES TRIANGLE!");
    }
    else if ((c==a)&&(a!=b))
    {
        printf("\n the given triangle is an ISOSCELES TRIANGLE!");
    }
    else if ((a==b)&&(b==c)&&(a==c))
    {
        printf("\n the given triangle is an EQUILATERAL TRIANGLE!");
    }
    else if ((a!=b)&&(b!=c)&&(a!=c))
    {
        printf("\n the given triangle is a SCALENE TRIANGLE!");
    }
    
    d=(a*a)==(b*b)+(c*c);
    e=(b*b)==(a*a)+(c*c);
    f=(c*c)==(a*a)+(b*b);

    if(d||e||f)
    {
        printf("\n the given triangle is a RIGHT ANGLE TRIANGLE!");
    }
    return 0;
}