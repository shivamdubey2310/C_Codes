#include<stdio.h>
static int y ;
int main( )
{
    static int z ;
    printf ("%d %d", y, z ) ;
}
//no errror output:- 0 0 