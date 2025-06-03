/*Write macro definitions with arguments for calculation of
Simple Interest and Amount. Store these macro definitions in
a file called “interest.h”. Include this file in your program, and
use the macro definitions for calculating simple interest and
amount.*/

#include<stdio.h>
#include"Cd.h"

int main()
{
    float p,r,t,si,amt;
    printf("\nEnter principal,rate and time : ");
    scanf("%f%f%f",&p,&r,&t);

    si=SI(p,r,t);
    amt=AMT(p,si);

    printf("Simple interest : %f\nAmount : %f",si,amt);
    return 0;
}