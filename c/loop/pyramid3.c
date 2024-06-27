/*
    1
    12
    123
    1234
    12345
*/

#include<stdio.h>
int main()
{
    int a,i,j;

    printf("\n ENTER THE NO. OF ROWS : ");
    scanf("%d",&a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}