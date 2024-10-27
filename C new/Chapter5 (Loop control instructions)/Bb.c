//FACTORIAL OF A NUMBER.

#include<stdio.h>
int main()
{
    int a,fact=1,i;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&a);

    //printf("\n%d",a);

    for(i=a;i>=1;i--)
    {
        fact=fact*i;
        printf("%d",i);          
        if (i==1)
        {
            break;
        }
        printf("*");
    }
    printf("=%d",fact);
    return 0;
}