// A #define directive is many a times used to define operators as shown below.
#include<stdio.h>
#define AND &&
#define OR ||
int main( )
{
    int f = 1, x = 4, y = 90 ;
    if ( ( f < 5 ) AND ( x <= 20 OR y <= 45 ) )
        printf ( "\nYour PC will always work fine..." ) ;
    else
        printf ( "\nIn front of the maintenance man" ) ;
}