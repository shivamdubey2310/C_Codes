/*Write down macro definitions for the following:
1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert a uppercase alphabet to lowercase.
4. To obtain the bigger of two numbers.*/

#include<stdio.h>
#include"Cc.h"
#define UPRTOLWR(x)     int d=0,e=0;\
                         d=90-x; e=122-d;\
                         printf(" %c IN LOWER CASE IS : %c",chh,e);

int main()
{
    int num1,num=0;
    int num2,num3,num4;
    float a,b,ab;
    char chh;
    printf("\nEnter any two numbers : ");
    scanf("%f%f",&a,&b);

    MEAN(a,b)
    
    printf("\nEnter any number : ");
    scanf("%d",&num1);

    ABSOLUTE(num1)

    fflush(stdin);
    printf("\nEnter any character in lower case : ");
    scanf("%c",&chh);
    UPRTOLWR(chh)

    printf("\nEnter any two numbers : ");
    scanf("%d%d",&num2,&num3);
    BIG(num2,num3);
    return 0;
}