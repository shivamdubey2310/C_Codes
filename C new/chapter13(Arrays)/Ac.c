#include<stdio.h>
int main()
{
    int sub[50], i ;
    for ( i = 0 ; i <= 48 ; i++ );
    {
        sub[i] = i ;
        printf ( "\n%d", sub[i] ) ;
    }
}
/*output: -
49
because of ";" after for loop
*/