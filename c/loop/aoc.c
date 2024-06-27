#include<stdio.h>
int main()
{
    int r,count,a;
    float area;
    count=1;
    printf("\nENTER HOW MANY TIMES DO YOU WANT TO CALCULATE AREA:");
    scanf("%d",&a);
    while(count<=a)
    {
        printf("\nENTER THE VALUE OF RADIUS:");
        scanf("%d",&r);
        area=3.14*r*r;
        printf("\nAREA OF RADIUS %d is: %f",r,area);
        count=count+1;
    }
    return 0;
}