#include<stdio.h>
int g(int);
int main( )
{
    int i, j ;
    for ( i = 1 ; i < 5 ; i++ )
    {
        j = g ( i ) ;       //j=g(1) j=5
        printf ( "\n%d\n", j ) ;      //print(6) (7) ()
    }
}
int g ( int x )
{
    static int v = 1 ;      //v=1;
    int b = 3 ;             //b=3;
    v += x ;                //v=v+x v=1+1; v=2;
    printf("v=%d\nx=%d\nb=%d",v,x,b);
    return ( v + x + b ) ;  //return (2+1+3);   return (6);
}
/*
v=2
x=1
b=3
6
v=4
x=2
b=3
9
v=7
x=3
b=3
13
v=11
x=4
b=3
18*/