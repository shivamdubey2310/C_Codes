#include<stdio.h>
int main()
{
    int a,b,sum;

    printf("\n enter any two numbers: ");
    scanf("%d%d",&a,&b);
    sum=a+b;
    switch (sum)
    {
    case 10:
           printf("\ni am in case 1");
            
        break;
    case 20:
           printf("\n i am in class 2");
           break;
    default:
           printf("\n i am in class 3");
        break;
    }
    return 0;
}