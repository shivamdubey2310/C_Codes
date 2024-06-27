#include<stdio.h>
void val();
int i = 0 ;

int main( )
{
    printf ( "\nmain's i = %d", i ) ;
    i++ ;
    val( ) ;
    printf ( "\nmain's i = %d", i ) ;
    val( ) ;
}
void val( )
{
    i = 100 ;
    printf ( "\nval's i = %d", i ) ;
    i++ ;
}
/*
OUTPUT:
main's i = 0
val's i = 100
main's i = 101
val's i = 100
*/