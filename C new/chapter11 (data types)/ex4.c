//Compare these two programs
#include<stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    auto int i = 1 ;
    printf ( "%d\n", i ) ;
    i = i + 1 ;
}
//output :-1    1   1

/*
#include<stdio.h>
void increment();
int main()
{
    increment();
    increment();
    increment();
    return 0;
}
void increment()
{
    static int i = 1 ;
    printf ( "%d\n", i ) ;
    i = i + 1 ;
}
//output :-1    2    3
*/