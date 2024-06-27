#include<stdio.h>
#define SIDE printf("\n ENTER THE VALUE OF SIDE : ");
int main()
{
    float area;
    int si;
    char another='y';

    for(;another=='y';)
    {
        SIDE;
        scanf("%d",&si);
        area = si*si;
        printf("\n AREA OF SQUARE OF SIDE %d IS : %f ",si,area);
        printf("\n do you want to enter another radius y/n : ");
        fflush(stdin);
        scanf("%c",&another);
    }
}