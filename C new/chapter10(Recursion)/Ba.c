/*Recursive and non recursive function to calculate sum of individual
digits of a 5 digit number.*/
//ERROR

#include<stdio.h>
int sum(int);
int sum1(int);

int main()
{
    int a,b,c;
    printf("\nEnter a 5 digit number : ");
    scanf("%d",&a);

    b=sum(a);
    c=sum1(a);

    printf("b=%d",b);
    printf("c=%d",c);
    return 0;
}

int sum(int x)
{
    int y,z=0;

    while (x>0)
    {
        y=x%10;     
        z=z+y;
        x=x/10;
    }
    return z;
}

int sum1(int x)
{
    int y,z;
    if(x!=0)
    {
        
        y=x%10;
        z=z+sum1(x/10); 
        
    }
    return z;
}