
#include<stdio.h>

int main()
{
    int rad;
    float area,circum; 
    printf("enter the radius of a circle\n");
    scanf("%d",&rad);
    area=3.14*rad*rad;
    circum=2*3.14*rad;
    printf("area=%f\n",area);
    printf("circumference=%f\n",circum);

    return 0;
}