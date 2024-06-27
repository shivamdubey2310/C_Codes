#include<stdio.h>
int main()
{
    int a,b,sum,count;
    
    count=1;
    while(count<=3)
    {
        printf("\nENTER TWO NUMBERS:");
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("\nSUM:%d",sum);
        count=count+1;    
    }
    return 0;
 }