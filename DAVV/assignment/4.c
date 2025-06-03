#include<stdio.h>
        int main()
       {
    int i,j,x,n;
    int space=0;                   
    n=71;
    x=n;
    for(i=1;i<=7;i++)
    {                              
        for(j=65;j<=x;j++)
        {
            printf("%c ",j);                 
        }
        x=x-1;
        int t;
        t=x;
        if(i>1)
    {
        t++;
    }
    for(int m=1;m<=space;m++)
    {
       printf("  ");
    }
    //space = (2 * i)-1;
    space=space+2;
    for(int  k = t;k>=65;k--)
    {
        printf("%c ",k);
    }
       printf("\n");
    }
 return 0;
}
