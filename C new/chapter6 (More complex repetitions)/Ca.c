//PROGRAM TO PRINT PRIME NUMBERS FROM 1 TO 300.
#include<stdio.h>
int main()
{
    int a,b,c,prime=0,i,j;

    for (i = 1; i <= 300; i++)
    {
        prime=0;
        for ( j = 1; j <=i; j++)
        {
            if (i%j==0)
            {
                prime++;
            }
        }
        if (prime==2)
        {
            printf("\n%d",i);
        }    
    }
    return 0;
}