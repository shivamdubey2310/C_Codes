//table in 2*1=2 format.
#include<stdio.h>
int main()
{
    int num,i;
    printf("\nENTER ANY NUMBER : ");
    scanf("%d",&num);

    for ( i = 1; i <=10; i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}