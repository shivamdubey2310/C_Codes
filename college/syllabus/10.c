//Write a program to check given number in range of 100-200 or not.
#include<stdio.h>
int main()
{
    int a;

    printf("ENTER ANY NUMBER : ");
    scanf("%d",&a);

    if (a>100&&a<200)
    {
        printf("%d IS IN THE RANGE OF 100-200",a);
    }
    else
    {
        printf("%d IS NOT IN THE RANGE OF 100-200",a);
    }
    return 0;
}