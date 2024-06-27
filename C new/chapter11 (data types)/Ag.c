#include<stdio.h>
float f(float);
float x = 4.5 ;
int main( )
{
    float y ;
    x *= 2.0 ;      //x=4.5*2   x=9.0
    y = f ( x ) ;   //y=14.8
    printf ( "\nin main (%f %f)", x, y ) ;      //4.500000  14.800000
}
float f ( float a )
{
    a += 1.3 ;          //a=9.0+1.3 a=10.3
    x -= 4.5 ;          //x=9.0-4.5 x=4.5
    return ( a + x ) ;  //return (10.3+4.5)     return(14.80000)
}
/*
output :-
4.500000    14.800000*/