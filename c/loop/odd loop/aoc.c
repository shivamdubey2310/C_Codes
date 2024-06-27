#include<stdio.h>
int main()
{
    int a;
    float area;
    char ano;

    do
    {
        printf("\nENTER THE RADIUS OF CIRCLE:");
        scanf("%d",&a);
        area=3.14*a*a;
        printf("\narea of circle of radius %d is: %f",a,area);
        printf("\ndo you want to enter another number:y/n");
        fflush(stdin);
        scanf("%c",&ano);
    }while(ano=='y');
    
    return 0;
    
}