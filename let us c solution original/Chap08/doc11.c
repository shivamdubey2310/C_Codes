/* Demonstration of passing an entire array to a function */
main( )
{
	int  num[ ] = { 24, 34, 12, 44, 56, 17 } ;
	dislpay ( &num[0], 6 ) ;
}

display ( int  *j, int  n ) 
{
	int  i ; 

	for ( i = 0 ; i <= n - 1 ; i++ )
	{
		printf ( "\nelement = %d", *j ) ;
		j++ ;  /* increment pointer to point to next element */
	}
}

