//calculate intelligence level.
#include<stdio.h>
int main()
{
    int y;
    float x,i;

    for (y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x=x+0.5)          //OR  for(x=5.5;x<=12.5;x+=0.5)   
        {
            i=2+(y+(0.5*x));

            printf("\nx=%f,y=%d,i=%f",x,y,i);
        }
        printf("\n");
    }
    return 0;
}