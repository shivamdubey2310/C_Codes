#include<stdio.h>
int f(int *,int);
int main( )
{
    int a[5], i, b = 16 ;
    for ( i = 0 ; i < 5 ; i++ )
        a[i] = 2 * i ;              //a[5]={0,2,4,6,8};
    f ( a, b ) ;
    for ( i = 0 ; i < 5 ; i++ )
        printf ( "\n%d", a[i] ) ;   //2 4 6 8 10
        printf( "\n%d", b ) ;       //16
}
int f ( int *x, int y )
{
    int i ;
    for ( i = 0 ; i < 5 ; i++ )
        *( x + i ) += 2 ;           //*x=*x+2  *x=2     *x1=4  *x2=6  *x3=8 *x4=10  
    y += 2 ;
}