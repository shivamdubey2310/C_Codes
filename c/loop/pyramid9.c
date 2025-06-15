/*
    ******
     *****
      ****
       ***
        **
         *
*/

#include<stdio.h>
int main()
{
    int a,i,j,s;

    printf("\n ENTER THE NO. OF ROWS : ");
    scanf("%d",&a);

    for(i=0;i<=a;i++)
    {
        for(s=0;s<=i;s++)
        {
            printf(" ");
        }
        for(j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}