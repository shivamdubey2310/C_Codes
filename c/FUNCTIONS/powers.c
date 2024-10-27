//WITHOUT ARGUMENTS AND RETURN VALUE 
#include<stdio.h>
void powers();
int main()
{
    powers();
    return 0;
}
void powers()
{
    int a,num2,num3;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);
    num2=a*a;
    num3=num2*a;
    printf("\n%d^1 = %d",a,a);
    printf("\n%d^2 = %d",a,num2);
    printf("\n%d^3 = %d",a,num3);
}