#include<stdio.h>
void func();
void main()
{
    func( ) ;
    func( ) ;
}
void func( )
{
    auto int i = 0 ;
    register int j = 0 ;
    static int k = 0 ;
    i++ ; j++ ; k++ ;
    printf ( "\n %d %d %d", i, j, k ) ;
}
/*
output

 1 1 1
 1 1 2
 */