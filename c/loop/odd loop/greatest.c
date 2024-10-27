#include<stdio.h>
int main()
{
    int num1,num2,num3;
    char ano='y';
    
    for(;ano=='y';)
    {
        printf("\n ENTER ANY THREE NUMBERS:");
        scanf("%d%d%d",&num1,&num2,&num3);
        if((num1>num2)&&(num1>num3))
        printf("%d is greatest",num1);
        if((num2>num1)&&(num2>num3))
        printf("%d is greatest",num2);
        if((num3>num1)&&(num3>num2))
        printf("%d is greatest",num3);
        printf("\nDO YOU WANT TO ENTER ANOTHER NUMBER:y/n");
        fflush(stdin);
        scanf("%c",&ano);
        
    }
    return 0;
}