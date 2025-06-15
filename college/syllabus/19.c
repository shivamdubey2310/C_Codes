// Write a program to check given number is prime or not.
#include<stdio.h>
int main()
{
    int a,i=1,c=0;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);

    while(i<=a)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    
    if(c==2)
    {
        printf("\n %d IS A PRIME NUMBER!",a);
    }
    else
    {
        printf("\n %d IS NOT A PRIME NUMBER!",a);
    }
    //printf("\n%d",4%0);
    return 0;
}