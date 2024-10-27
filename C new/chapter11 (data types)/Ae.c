#include<stdio.h>
int main( )
{
    static int count = 5 ;
    printf ( "\ncount = %d", count-- ) ;
    if ( count != 0 )
        main( ) ;
}
/*output:-
5
4
3
2
1
*/