//Here is another example of macros with arguments:
#include<stdio.h>
#define ISDIGIT(y) ( y >= 48 && y <= 57 )
int main( )
{
    int a ;
    printf ( "Enter any digit " ) ;
    scanf ( "%d", &a ) ;
    if ( ISDIGIT ( a ) )
        printf ( "\nYou entered a digit" ) ;
    else
        printf ( "\nIllegal input" ) ;
    return 0;
}
