#include<stdio.h>
#define SCAN scanf("%d%d",&l,&b);
int main()
{
    int l,b,area;
    char another;

    do
    {
    printf("\n ENTER VALUE OF LENGTH AND BREADT : ");
    SCAN;
    area = l*b;
    printf("\n AREA OF RECTANGLE OF LENGTH %d AND BREADTH %d IS : %d ",l,b,area);
    printf("\n do you want to enter another radius y/n : ");
    fflush(stdin);
    scanf("%c",&another);
    } while(another=='y');
    return 0;
}