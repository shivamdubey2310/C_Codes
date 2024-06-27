/*GREATEST AMONG THREE NUMBER*/
#include<stdio.h>
#include<conio.h>
void main()
{
    int num1,num2,num3;
    printf("ENTER ANY THREE NUMBER:\n");
    scanf("%d%d%d",&num1,num2,num3);
    if((num1>num2)&&(num1>num3))
    printf("\nNUM1 IS GREATEST");
    if((num2>num3)&&(num2>num1))
    printf("\nNUM2 IS GREATEST");
    if ((num3>num2)&&(num3>num1))
    printf("\nNUM3 IS GREATEST");
    getch();
}