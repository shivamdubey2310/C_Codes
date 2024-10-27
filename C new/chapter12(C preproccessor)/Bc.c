#include<stdio.h>
#define PRODUCT(x) ( x * x ); \
                        printf(" at upar%d\n",i ) ;
                            
int main( )
{
    int i = 3, j, k ;
    printf("at initial %d\n",i );
    j = PRODUCT( i++ ) ;
    printf("at j=%d\n",i );
    k = PRODUCT ( ++i ) ;
    printf ( "\n%d %d", j, k ) ;
}