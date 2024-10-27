#include<stdio.h>
int main()
{

    int base,height;
    float area; 
    printf("ENTER THE VALUE OF BASE AND HEIGHT");
    scanf("%d%d",&base,&height);
    area=0.5*base*height;
    printf("AREA OF TRIANGLE =%f",area);
    return 0;
}
