//Write a program to perform arithmetic operation on two numbers.

#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,mod;
    float div;

    printf("\n ENTER ANY TWO NUMBER : ");
    scanf("%d%d",&a,&b);
    
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    mod=a%b;
    
    printf("\n SUM OF %d AND %d IS : %d",a,b,sum);
    printf("\n SUBTRACTION OF %d AND %d IS : %d",a,b,sub);
    printf("\n MULTIPLICATION OF %d AND %d IS : %d",a,b,mul);
    printf("\n DIVISION OF %d AND %d IS : %f",a,b,div);
    printf("\n MODULUS OF %d AND %d IS : %d",a,b,mod);

}