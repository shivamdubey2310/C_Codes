#include<stdio.h>
#define pi 3.1428
int main()
{
    float area;
    int r;
    char another='y';

    for(;another=='y';)
    {
        printf("\n ENTER VALUE OF RADIUS : ");
        scanf("%d",&r);
        area = pi*r*r;
        printf("\n AREA OF CIRCLE OF RADIUS %d : %f ",r,area);
        printf("\n do you want to enter another radius y/n : ");
        fflush(stdin);
        scanf("%c",&another);
    }
}