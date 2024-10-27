/*
         *
        **
       ***
      ****
     *****
*/
#include<stdio.h>
int main()
{
    int a,i,j,s;

    printf("\n ENTER THE NO. OF ROWS : ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(s=a;s>=i;s--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}