#include<stdio.h>
int main()
{
    int a,sq;
    char another='y';
    for (;another=='y';)
    {
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&a);
    sq=a*a;
    printf("SQUARE OF %d IS: %d\n",a,sq);
    printf("DO YOU WANT TO ENTER ANOTHER NUMBER:y/n");
    fflush(stdin);
    scanf("%c",&another);
    }
    return 0;
}
