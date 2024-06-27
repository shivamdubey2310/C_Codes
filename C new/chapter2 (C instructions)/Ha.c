/*write a program to calculate the sum of individual 
digits of a five digit number.*/ 
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,n,sum;

    printf("ENTER A FIVE DIGIT NUMBER : ");
    scanf("%d",&n); // let the number entered is 12345. 

    a=n/10000; // 1        1st digit 
    b=n%10000; // 2345
    c=b/1000;  // 2        2nd digit
    d=b%1000;  //345
    e=d/100;   //3         3rd digit
    f=d%100;   //45
    g=f/10;    //4         4th digit    
    h=f%10;    //5         5th digit 
    
    sum=a+c+e+g+h;
    
    printf("\n SUM OF INDIVIDUAL DIGITS OF %d IS : %d",n,sum);
    return 0;
}