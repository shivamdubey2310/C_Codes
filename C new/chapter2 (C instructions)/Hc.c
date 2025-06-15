//AREA OF A TRIANGLE USING 3 SIDES.

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;

    printf("\n ENTER SIDES OF THE TRIANGLE : ");
    printf("\n SIDE 1 : ");
    scanf("%f",&a);
    printf(" SIDE 2 : ");
    scanf("%f",&b);
    printf(" SIDE 3 : ");
    scanf("%f",&c);
    
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("\n AREA OF THE TRIANGLE WITH SIDE %f,%f AND %f IS : %f",a,b,c,area);
    return 0;
}