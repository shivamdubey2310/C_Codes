#include<stdio.h>
void pass(int,int);
int main()
{
    int i=135,a=135,k;
    k=pass(i,a);
    printf("%d\n",k);
    return 0;
}

void pass(int j,int b)
int c;
{
    c=j+b;
    return(c);
}
/*
Errors:-
-->line 6-->  A value of type "void" cannot be assigned to an entity of type "int"..i.e.k=pass(i,a); k is not valid because pass has no return type.hence,there will not be any value assigned to k.
-->line 12--> the declaration c should be inside the braces  
*/
