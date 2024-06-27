#include<stdio.h>
int main()
{
    int a,sq;
    char another;
    do
    {
    printf("\nENTER ANY NUMBER:");
    scanf("%d",&a);
    sq=a*a;
    printf("SQUARE OF %d IS: %d\n",a,sq);
    printf("DO YOU WANT TO ENTER ANOTHER NUMBER:y/n");
    fflush(stdin);
    scanf("%c",&another);
    } while(another=='y');
    return 0;
}
