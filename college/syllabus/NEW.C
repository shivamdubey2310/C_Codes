#include<stdio.h>
int main()
{
    int a,b,c,d;

    printf("\n ENTER ANY NUMBER : ");
    scanf("%d",&a);
    
    b=a/100;
    c=a%100;
    d=c%10;
    if(d==b)
    {
        printf("\n THE ENTERED NUMBER IS palindrome! ");
    }
    else
        printf("\n THE ENTERED NUMBER IS not palindrome! ");
    return 0;
}