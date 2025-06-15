/*
rewrite using conditional operator(?). 
*/
#include<stdio.h>
int main()
{
    float sal;

    printf("\nENTER SALARY : ");
    scanf("%f",&sal);

    (sal>=25000&&sal<=40000)?printf("\nmanager."):((sal>=15000&&sal<25000)?(printf("\naccountant.")):printf("\nclerk."));
    return 0;
}