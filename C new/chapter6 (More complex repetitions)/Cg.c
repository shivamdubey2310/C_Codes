//LOGARITHMIC TABLE by series  : (x-1/x)+1/2(x-1/x)^2+1/2(x-1/x)^3+1/2(x-1/x)^4....upto 7terms
#include<stdio.h>
#include<math.h>
int main()
{
    int x,i;
    float z=0.0;

    printf("\nEnter the value of X : ");
    scanf("%d",&x);

    for(i=1;i<=7;i++)
    {
        if (i==1)
        {
            z=z+pow((x-1.0)/x,i);
        }
        else
        {
            z=z+(1.0/2)*pow((x-1.0)/x,i);
            
        }

    }
    printf("\nSum of first seven terms of natural logarithm : %f",z);
    return 0;
}