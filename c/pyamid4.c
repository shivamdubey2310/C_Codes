/*  
    12345
    1234
    123
    12
    1
*/
#include<stdio.h>
int main()
{
    int a,i,j;

    printf("\n ENTER THE NO. OF ROWS : ");
    scanf("%d",&a);
    
    for(i=a;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}