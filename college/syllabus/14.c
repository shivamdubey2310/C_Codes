//Write a program to print table of any number.

#include<stdio.h>
int main()
{
    int a,i,tab;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);
    
    for(i=1;i<=10;i++)
    {
        tab=a*i;
        printf("\n%d*%d=%d",a,i,tab);
    }
    return 0;
}