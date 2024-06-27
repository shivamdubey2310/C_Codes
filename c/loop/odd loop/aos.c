#include<stdio.h>
int main()
{
    int a;
    float area;
    char ano='y';

    for(;ano=='y';)
    {
        printf("\nenter the side of square:");
        scanf("%d",&a);
        area=a*a;
        printf("\narea of square of side %d is: %f",a,area);
        printf("\ndo you want to enter another side:y/n");
        fflush(stdin);
        scanf("%c",&ano);
    }
    return 0;
}