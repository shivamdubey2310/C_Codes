//OCTAL EQUIVALENT(copied from solutions).
#include<stdio.h>
#include<math.h>

int main()
{
    int num1,num2,rem,oct,p;

    printf("\nEnter any number : ");
    scanf("%d",&num1);

    num2=num1;
    p=oct=0;
    while (num1>0)
    {
        rem=num1%8;
        num1=num1/8;
        oct=oct+rem*pow(10,p);		
        p++;
    }
    printf("The octal equivalent of %d is %d\n",num2,oct);
    return 0;
}