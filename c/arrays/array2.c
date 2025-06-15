#include<stdio.h>
int main()
{
    int si[5],i;
    
    printf("\n ENTER THE NUMBERS : ");
    for(i=0;i<5;i++)
    
        scanf("%d",&si[i]);
    
    for(i=0;i<5;i++)
    
        printf("\nARRAY VALUE AT INDEX %d IS : %d ",i,si[i]);
    
    return 0;
}