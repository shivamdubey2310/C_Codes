#include<stdio.h>
int main()
{

    int base,height,count=1;
    float area;
    while(count<=4)
    {
        printf("\nENTER THE VALUE OF BASE AND HEIGHT");
    scanf("%d%d",&base,&height);
    area=0.5*base*height;
    printf("\nAREA OF TRIANGLE OF BASE %d AND HEIGHT %d =%f",base,height,area);
    count=count+1;
    }
    return 0;
}
