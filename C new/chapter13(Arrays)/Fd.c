#include<stdio.h>
int main( )
{
    float a[ ] = { 13.24, 1.5, 1.5, 5.4, 3.5 } ;
    float *j ;
    j = a ;         //j=&13.24  || *j=13.24
    j = j + 4 ;     //j=&13.24+4 j=&3.5  ||*j=3.5
    printf ( "\n%d %f %f", j, *j, a[4] ) ;  //&3.5   3.5    3.5
}
/*output:-
use %f for printing out *j and a[4]*/