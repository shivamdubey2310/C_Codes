#include<stdio.h>
int main()
{
    int a,sq;
    char ano='y';

    while(ano=='y')
    {
        printf("\nenter the number:");
        scanf("%d",&a);
        sq=a*a;
        printf("\nSQUARE OF THE NUMBER %d IS: %d",a,sq);
        printf("\n DO YOU WANT TO ENTER ANOTHER NUMBER:y/n");
        fflush(stdin);
        scanf("%c",&ano);
    }
    return 0;
}