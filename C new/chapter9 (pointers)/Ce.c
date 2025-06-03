//Area of a triangle by sides (Heron's formula)
#include<stdio.h>
#include<math.h>

float aot(float *,float *,float *,float *,float *);
int main()
{
    float a,b,c,s=0,area=0;

    printf("\nEnter length of 1st side of the triangle : ");
    scanf("%f",&a);

    printf("\nEnter length of 2nd side of the triangle : ");
    scanf("%f",&b);

    printf("\nEnter length of 3rd side of the triangle : ");
    scanf("%f",&c);

    aot(&a,&b,&c,&s,&area);

    printf("\nArea of the triangle with sides %f,%f and %f is : %f",a,b,c,area);
    return 0;
}

float aot(float *x,float *y,float *z,float *sp,float *ar)
{
   float sq;

   *sp=(*x+*y+*z)/2;                
   sq=*sp*((*sp-(*x))*(*sp-(*y))*(*sp-(*z)));
   *ar=sqrt(sq);
    return (0.00);
}