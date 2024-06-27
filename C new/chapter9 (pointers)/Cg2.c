//Euclid's division lemma to find greatest common divisor 
//OR method (incomplete)

#include<stdio.h>
int fun(int,int);
int main()
{
    int j,k,t,r,z;

    printf("\nEnter two numbers : ");
    scanf("%d%d",&j,&k);
    z=fun(j,k);
    printf("\nGreatest common divisor of the two numbers is : %d",z);
    return 0;
}
//function to calculate GCD.
int fun(int j,int k)
{
    int r=1,m,n=0,t;
    if (k>j)    //Interchange values
    {
        t=j;
        j=k;
        k=t;
    }
    else
    {
        if (j==k)
        {
            return j;
        }
    }
    while (1)
    {
        r=j/k;
        m=j-(r*k);

        if (!(j%k))
        {
            n=k;
        }
        
        if (m==0)
        {
            break;
        }
        j=k;
        k=m;
        n=m;
    }
    return n;
}