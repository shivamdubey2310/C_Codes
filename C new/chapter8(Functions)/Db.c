// Make a function power(a,b) to calculate a raised to b.

#include<stdio.h>
#include<math.h>
int power(int a,int b);

int main()
{
    int A,B,ANS;

    printf("\nEnter BASE number : ");
    scanf("%d",&A);
    
    printf("\nEnter EXPONENT number : ");
    scanf("%d",&B);

    ANS=power(A,B);

    printf("ANSWER : %d",ANS);
    return 0;
}

int power(int a,int b)
{
    int ans;
    ans=pow(a,b);
    return (ans);
}