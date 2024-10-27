#include<stdio.h>
int main()
{
    int a,b,average;
    char ano;

    do
    {
        printf("\n enter any two numbers:");
        scanf("%d%d",&a,&b);
        average=(a+b)/2;
        printf("\naverage of given numbers is : %d",average);
        printf("\ndo you want to enter another number:y/n");
        fflush(stdin);
        scanf("%c",&ano);
    }while(ano=='y');
    return 0;   
}  