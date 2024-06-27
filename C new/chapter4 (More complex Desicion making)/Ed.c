#include<stdio.h>
#include<math.h>
int main()
{
    float a,sum;

    printf("\nENTER ANY ANGLE IN DEGREE : ");
    scanf("%f",&a);

    a=a*3.14/180;

    sum=pow(sin(a),2)+pow(cos(a),2);

    if (sum==1)
    {
        printf("\n SUM IS EQUAL TO ONE.");
    }
    else
    {
        printf("\n SUM IS NOT EQUAL TO ONE.");
    }
    return 0;
}