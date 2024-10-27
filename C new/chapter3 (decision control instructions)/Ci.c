// whether the area of a rectangle is greater than its perimeter or not 
#include<stdio.h>
int main()
{
    float l,b,area,per;

    printf("\nENTER LENGTH AND BREADTH OF A RECTANGLE:");
    printf("\nLENGTH : ");
    scanf("%f",&l);
    printf("\nBREADTH : ");
    scanf("%f",&b);
    
    area=l*b;
    per=2*(l+b);

    if (area>=per)
    {
        printf("\nAREA(%f) OF THE RECTANGLE IS GRATER THAN OR EQUAL TO ITS PERIMETER(%f)",area,per);
    }
    else
    {
        printf("\nAREA(%f) OF THE RECTANGLE IS LESS THAN ITS PERIMETER(%f)",area,per);
    }
    return 0;
}