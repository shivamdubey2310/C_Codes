#include<stdio.h>
int main()
{
    int p,t,count;
    float r,si;
    count=1;
    while (count<=4)
    {
        
    
    
    printf("\nenter the value of principal,time and rate");
    scanf("%d%d%f",&p,&t,&r);
    si=p*r*t/100;
    printf("simple interest is =%f",si);
    count=count+1;}
    return 0;
    
}
