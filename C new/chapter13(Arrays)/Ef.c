#include<stdio.h>
int main( )
{
    int a[5] = { 5, 1, 15, 20, 25 } ;
    int i, j, k = 1, m ;
    
    i = ++a[1] ;        //i=3
    j = a[1]++ ;        //j=2
    m = a[i++] ;        //m=15
    printf ( "\n%d %d %d", i, j, m ) ;
}