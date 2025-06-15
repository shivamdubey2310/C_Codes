/* mixed has some char and some int values */

//int char mixed[100] ;
main( )
{
    int a[10], i ;
    for ( i = 1 ; i <= 10 ; i++ )
    {
        scanf ( "%d", a[i] ) ;
        printf ( "%d", a[i] ) ;
    }
}
//ERROR char in 3rd line 
//Logical error bound exceeded