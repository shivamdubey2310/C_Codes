//prime numbers of a number.
#include<stdio.h>
int prime(int);
int main()
{
    int num;

    printf("\nEnter the number : ");
    scanf("%d",&num);

    prime(num);
    return 0;
}
int prime(int a)
{
    int i=2;
    printf("\nPrime factors of %d are : ",a);

    while (a!=1)
    {
        if (a%i==0)
        {
            printf("%d ",i);
        }
        else
        {
            i++;
            continue;
        }
        a=a/i;
    }
    return 0;
}