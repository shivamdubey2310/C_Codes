#include<stdio.h>  
int main() 
{  
  
    int num,rem,sum=0,i;  
  
    printf("\n ENTER ANY NUMBER : ");  
    scanf("%d",&num);      

    for(i=1;i<num;i++)  
    {  
        rem=num%i;  
        if (rem==0)  
        {  
            sum=sum+i;  
        }  
    }  
    if(sum==num)  
    {
        printf(" %d IS A PERFECT NUMBER",num);  
    }
    else  
    {
        printf("\n %d IS NOT A PERFECT NUMBER",num);  
    }
    return 0;  
} 