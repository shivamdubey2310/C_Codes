//body mass index.
#include<stdio.h>
int main()
{
    float w,h,r,bmi;

    printf("\nEnter the weight and height : ");
    scanf("%f%f",&w,&h);

    bmi=w/(h*h);

    if (bmi<15)
    {
        printf("\nStarvation.");
    }
    else if ((bmi>=15.1)&&(bmi<=17.5))
    {
        printf("\nAnorexic.");
    }
    else if ((bmi>=17.6)&&(bmi<=18.5))
    {
        printf("\nUnderweight.");
    }
    else if ((bmi>=18.6)&&(bmi<=24.9))
    {
        printf("\nIdeal.");
    }
    else if ((bmi>=25)&&(bmi<=25.9))
    {
        printf("\nOverweight.");
    }
    else if ((bmi>=30)&&(bmi<=30.9))
    {
        printf("\nObese.");
    }
    else if ((bmi>=40))
    {
        printf("\nMorbidly Obesed.");
    }
    return 0;
}