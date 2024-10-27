#include<stdio.h>
void increment();
void decrement ();
int i ;
int main()
{
    printf ( "\ni = %d", i ) ;
    increment( ) ;
    increment( ) ;
    decrement( ) ;
    decrement( ) ;
}
void increment( )
{
    i = i + 1 ;
    printf ( "\non incrementing i = %d", i ) ;
}
void decrement( )
{
    i = i - 1 ;
    printf ( "\non decrementing i = %d", i ) ;
}