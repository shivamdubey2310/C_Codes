#include<stdio.h>
int main()
{
    int a,b,sq;
    char another='y';

    for(;another=='y';)
    {
        printf("\nenter any number:");
        scanf("%d",&a);
        sq=a*a;
        printf("\n square of the number  %d is: %d",a,sq);
        printf("\n do you want to enter another nuumber:y/n");
        fflush(stdin);
        scanf("%c",&another);
    }
    return 0;
}