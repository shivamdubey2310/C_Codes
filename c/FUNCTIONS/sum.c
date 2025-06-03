// without arguments and return value
#include<stdio.h>
int sum();
int main()
{
    sum();
}
int sum()
{
    int a,b,sum;
    char another;
    do
    {
    printf("\nENTER ANY TWO NUMBERS");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\n sum is: %d",sum);
    printf("\n do you want to do another sum y/n");
    fflush(stdin);
    scanf("%c",&another);
    }while(another=='y');
    return 0;
    
}