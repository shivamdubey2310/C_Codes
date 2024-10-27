/*#include<stdio.h>
int main()
{
    register int i = 1 ;
    {
        {
            {
                printf ( "\n%d ", i ) ;
            }
                printf ( "%d ", i ) ;
        }
        printf ( "%d", i ) ;
    }
}*/
#include<stdio.h>
int main()
{
    register int i = 1 ;
    {
        register int i=2;
        {
            register int i=3;
            printf ( "\n%d ", i ) ;
        }
        printf ( "%d ", i ) ;
    }
    printf ( "%d", i ) ;
}
