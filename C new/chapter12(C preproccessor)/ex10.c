/*A more sophisticated use of #ifdef has to do with making the
programs portable, i.e. to make them work on two totally
different computers. Suppose an organization has two 
different types of computers and you are expected to write a
program that works on both the machines. You can do so by
isolating the lines of code that must be different for each
machine by marking them off with #ifdef. For example:*/
#include<stdio.h>
int main( )
{
    #ifdef INTEL
        // type code suitable for a Intel PC
    #else
        //code suitable for a Motorola PC
    #endif
        //code common to both the computers
}