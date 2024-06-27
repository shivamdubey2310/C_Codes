#include<stdio.h>

int main( )
{
    float a = 25.345 ;
    float *b ;
    b = &a ;
    printf ( "\n%f %u", a, b ) ;
}
//No error output:- 25.344999 3797941316 