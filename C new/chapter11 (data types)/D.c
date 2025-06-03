/*Following program calculates the sum of digits of the number
12345. Go through it and find out why is it necessary to
declare the storage class of the variable sum as static.*/
#include<stdio.h>
int sumdig(int);
int main( )
{
    int a ;
    a = sumdig ( 12345 ) ;
    printf ( "\n%d", a ) ;
}
int sumdig ( int num )
{
    static int sum ;
    int a, b ;
    a = num % 10 ;
    b = ( num - a ) / 10 ;
    sum = sum + a ;
    if ( b != 0 )
        sumdig ( b ) ;
    else
        return ( sum ) ;
}