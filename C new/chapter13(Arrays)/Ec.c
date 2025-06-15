#include<stdio.h>
int change(int *,int);
int main( )
{
    int a[ ] = { 2, 4, 6, 8, 10 } ;
    int i ;
    change ( a, 5 ) ;               //2,5
    for ( i = 0 ; i <= 4 ; i++ )
        printf( "\n%d", a[i] ) ;
}
int change(int *b,int n )
{
    int i ;
    for ( i = 0 ; i < n ; i++ )     
        *( b + i ) = *( b + i ) + 5 ;   //*(b+0)=*(b+0)+5    *b=*b+5  b0=2+5; *(b+1)=*(b+1)+5  b1=4+5; 
}