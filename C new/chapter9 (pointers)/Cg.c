//Euclid's division lemma to find greatest common divisor 

#include<stdio.h>

int fun(int *,int *);
int main()
{
    int a,b,c=1,i;

    printf("\nEnter first number (dividend) : ");
    scanf("%d",&a);
    printf("\nEnter second number (divisor): ");
    scanf("%d",&b);

    for(i=1;c>0;i++)
    {
        c=fun(&a,&b);
    }
    return 0;
}

int fun(int *j,int *k)
{
    int l;
    l=*j%*k;
    printf("\na=%d\nb=%d\nl=%d\n",*j,*k,l);
    *j=*k;
    if (l==0)
    {
        printf("\n%d",*k);
    }
    *k=l;
    return (l);
}