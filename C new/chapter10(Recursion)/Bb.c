//Prime factors.
#include<stdio.h>

void factor(int);
int main()
{
    int num;

    printf("\nEnter any number : ");
    scanf("%d",&num);

    printf("\nPrime factors are : ");
    factor(num);
    return 0;
}

void factor(int n)
{
    static int i=2;

    if (i<=n)
    {
        if (n%i==0)
        {
            printf("%d",i);
            n=n/i;
        }
        else 
        i++;
        factor (n);
    }
    return ;
}