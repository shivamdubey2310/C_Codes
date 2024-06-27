#include<stdio.h>
#include<recursions.h>
int main()
{

    int i=3;
    int *j;

    j=&i; 
    printf("\nvalue of i : %u ",i);
    printf("\nvalue of i : %u ",*(&i));
    printf("\nvalue of i : %u ",*j);
    printf("\nvalue of j : %u ",j);
    printf("\n add of i : %u ",&i);
    printf("\n add of i : %u ",j);
    printf("\n add of j : %u ",&j);
    return 0;
}
    