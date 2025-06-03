//Write a program to check given number is palindrome or not.

#include<stdio.h>  
int main()    
{    
    
    int n,r,sum=0,temp;    
    
    printf("\n ENTER ANY NUMBER : ");    
    scanf("%d",&n);    
    
    temp=n;    

    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }

    if(temp==sum)    
    {
        printf("\n %d IS A PALINDROME NUMBER ",temp);    
    }
    else    
    {
        printf("\n %d IS NOT A PALINDROME NUMBER ",temp);
    }
    return 0;  
}   