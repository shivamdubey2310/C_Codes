#include<stdio.h>
#define PRODUCT(x) (x*x)
int main( )
{
    int i = 3, j ;
    j = PRODUCT( i+1 ) ;
    printf ( "\n%d", j ) ;
    return 0;
}