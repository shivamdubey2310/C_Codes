//TRIGONOMETRIC RATIOS BY ANGLE.
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,rad,c,d;

    printf("\n ENTER ANY ANGLE : ");
    scanf("%f",&a);

    rad=a*3.14/180;

    b=sin(rad);
    c=cos(rad);
    d=tan(rad);

    printf("sin(%f) : %f\n cos(%f) : %f\n tan(%f) : %f",rad,b,rad,c,rad,d);
}