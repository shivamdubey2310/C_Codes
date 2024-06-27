//Write a program for addition subtraction multiplication division using switch case.
#include<stdio.h>
int main()
{
    int a,b,c;
    float div;
    printf("ENTER ANY TWO NUMBERS : ");
    scanf("%d%d",&a,&b);
    div=a/b;

    printf("\n ENTER 1 FOR ADDITION\n ENTER 2 FOR SUBTRACTION\n ENTER 3 FOR MULTIPLICATION\n ENTER 4 FOR DIVISION : ");
    scanf("%d",&c);
    
    switch (c)
    {
        case 1:
        printf("\nYOU ENTERED 1 FOR ADDITION:");
        printf("\n%d+%d=%d",a,b,a+b);
        break;
        
        case 2:
        printf("\nYOU ENTERED 2 FOR SUBTRACTION:");
        printf("\n%d-%d=%d",a,b,a-b);
        break;
        
        case 3:
        printf("\nYOU ENTERED 3 FOR MULTIPLICATION:");
        printf("\n%d*%d=%d",a,b,a*b);
        break;

        case 4:
        printf("\nYOU ENTERED 4 FOR DIVISION:");
        printf("\n%d/%d=%f",a,b,div);
        break;

        default:
        printf("%d IS INVALID!",c);      
    }
    return 0;
}