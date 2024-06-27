#include<stdio.h>
int main()
{
    float a=13.5;
    float *b,*c;
    b=&a;           //suppose address of a is 1006.
    c=b;
    printf("%u\t%u\t%u\n",&a,b,c);
    printf("%f\t%f\t%f\t%f\t%f\n",a,*(&a),*&a,*b,*c);
    return 0;
}
/*
output:-
1006    1006    1006
13.500000    13.500000    13.500000    13.500000    13.500000
*/