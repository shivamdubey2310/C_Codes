//Write a function to calculate sum,average and standard deviation of 5 numbers entered.
#include<stdio.h>
#include<math.h>

int fun(int *,int *,int *,int *,int *,int *,int *,double *);
int main()
{
    int a,b,c,d,e,n,i,sum,avg;
    double sd;

    printf("\nEnter the number : ");
    scanf("%d",&a);
    
    printf("\nEnter the number : ");
    scanf("%d",&b);

    printf("\nEnter the number : ");
    scanf("%d",&c);
    
    printf("\nEnter the number : ");
    scanf("%d",&d);

    printf("\nEnter the number : ");
    scanf("%d",&e);

    fun(&a,&b,&c,&d,&e,&sum,&avg,&sd);
    printf("\nSum : %d\naverage : %d\nstandard deviation : %lf",sum,avg,sd);
    return 0;
}

int fun(int *p,int *q,int *r,int *s,int *t,int *sum,int *avg,double *sd)
{
    *sum=*p+*q+*r+*s+*t;
    *avg=*sum/5;
    *sd=sqrt((pow((*p-*avg),2)+pow((*q-*avg),2)+pow((*r-*avg),2)+pow((*s-*avg),2)+pow((*t-*avg),2))/4);
}

//alternative method
/*
#include<stdio.h>
#include<math.h>

int fun(int *,int *,double *);
int main()
{
    int sum,avg;
    double sd;

    fun(&sum,&avg,&sd);
    printf("\nSum : %d\naverage : %d\nstandard deviation : %lf",sum,avg,sd);
    return 0;
}

int fun(int *sum,int *avg,double *sd)
{
    int a,b,c,d,e;
    printf("\nEnter the number : ");
    scanf("%d",&a);
    
    printf("\nEnter the number : ");
    scanf("%d",&b);

    printf("\nEnter the number : ");
    scanf("%d",&c);
    
    printf("\nEnter the number : ");
    scanf("%d",&d);

    printf("\nEnter the number : ");
    scanf("%d",&e);
    *sum=a+b+c+d+e;
    *avg=*sum/5;
    *sd=sqrt((pow((a-*avg),2)+pow((b-*avg),2)+pow((c-*avg),2)+pow((d-*avg),2)+pow((e-*avg),2))/4);
}
*/