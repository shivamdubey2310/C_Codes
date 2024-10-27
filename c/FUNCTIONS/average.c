// with arguments and return value
#include<stdio.h>
int aver(int x,int y);
int main()
{
    int a,b,average;
    
        printf("\n enter any two numbers:");
        scanf("%d%d",&a,&b);
        average=aver(a,b);
        printf("\naverage of given numbers is : %d",average);
        
    return 0;   
}  
int aver(int x,int y)
{
    int d;
    d=(x+y)/2;
    return(d);
}