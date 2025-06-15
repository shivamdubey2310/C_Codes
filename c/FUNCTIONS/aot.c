// with arguments and without return value
#include<stdio.h>
void are(int x,int y);
int main()
{
    int base,height;
    printf("ENTER THE VALUE OF BASE AND HEIGHT");
    scanf("%d%d",&base,&height);
    are (base,height);
    return 0;
}
void are(int x,int y)
{   
    float area;
    area=0.5*x*y;
    printf("\nAREA OF TRIANGLE: %f",area);
}
