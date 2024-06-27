//whether the triangle is valid or not.
#include<stdio.h>
int main()
{
    float a,b,c,sum;

    printf("\nEnter the angles of the triangle : ");
    printf("\n1st angle : ");
    scanf("%f",&a);
    printf("\n2nd angle : ");
    scanf("%f",&b);
    printf("\n3rd angle : ");
    scanf("%f",&c);

    sum=a+b+c;

    if (sum==180)
    {
        printf("\nTHE TRIANGLE IS A VALID TRIANGLE!");
    }
    else
    {
        printf("\nTHE TRIANGLE IS NOT A VALID TRIANGLE!");
    }
    return 0;
    
}