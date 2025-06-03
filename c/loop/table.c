#include<stdio.h>
int main()
{
    int a,b,d,c=1;
        printf("\nENTER ANY NUMBER : ");
        scanf("%d",&a);
        printf("\n ENTER THE NUMBER OF NO. MULTIPLIED : ");
        scanf("%d",&d);
     while(c<=d)
    {
        b=a*c;
        printf("\n%d*%d=%d",a,c,b);
      
        c=c+1;
    }
    return 0;    
}

