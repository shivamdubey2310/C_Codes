#include<stdio.h>
int main()
{
    int i;
    while (i=10)
    {
        printf("%d\n",i);
        i=i+1;
    }
    return 0;
    
}
/*
output:-
10
10
10
10
......infinite loop
*/
