#include<stdio.h>
int main()
{
    int i,num;
    printf("enter a number");
    scanf("%d",&num);
    i=2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("NOT A PRIME NUMBER\n");
            break;
        }
        i++;
    }
    if(i==num)
    printf("prime number\n");
}