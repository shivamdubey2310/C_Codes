#include<stdio.h>
#define AREA(x) (x*x) 
int main()
{
    int side,a;
    printf("\nEnter the side of square : ");
    scanf("%d",&side);
    a=AREA(side);
    printf("\narea of the square of side %d is %d",side,a);
    return 0;
}