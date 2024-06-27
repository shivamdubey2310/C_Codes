//Conditional compilation
#include<stdio.h>
// #define OKAY
int main( )
{
    #ifdef AMD
        printf("\nasdfjkl;");
    #endif
        printf("\n;lkjfdsa");
    return 0;

}
/*
Output :- if #define Okay is present.
asdfjkl;
;lkjfdsa
- if #define Okay is absent.
;lkjfdsa
*/