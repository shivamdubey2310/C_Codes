#include<stdio.h>
int f(int);
int g(int);
int main( )
{
    int x, y, s = 2 ;
    s *= 3 ;        //s=s*3     s=6;
    y = f ( s ) ;   //f(6)
    x = g ( s ) ;   //f(6)
    printf ( "\n%d %d %d", s, y, x ) ;  //6  5  6
}
int t = 8 ;
int f ( int a )
{
    a += -5 ;       //a=a+(-5)   a=1;
    t -= 4 ;        //t=t-4      t=4;
    return ( a + t ) ;          //return(5);
}
int g ( int a )
{
    a = 1 ;         //a=1;
    t += a ;        //t=t+1;    t=5;
    return ( a + t ) ;      //return(6);
}