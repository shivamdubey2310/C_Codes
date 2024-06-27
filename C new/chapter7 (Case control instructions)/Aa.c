#include<stdio.h>
int main()
{
    char suite='3';
    switch (suite)
    {
    case 1:
        printf("Diamond\n");
        break;
    case 2:
        printf("Spade\n");
        break;
    default:
        printf("Heart\n");
        break;
    }   
    printf("I thought one wears a suite\n");
    return 0;
}
/*
heart
I thought one wears a suite
*/