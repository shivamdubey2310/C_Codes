// WITHOUT ARGUMENTS AND WITH RETURN VALUE 
#include<stdio.h>
float aref();
int main()
{
    float area;
    area=aref();
    printf("\nAREA IS : %f",area);
    return 0;
}
float aref()
{
    int r;
    float area;

    printf("\n ENTER THE VALUE OF RADIUS:");
    scanf("%d",&r);
    area=3.14*r*r;
    return (area);
}
 
