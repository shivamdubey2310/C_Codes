#include<stdio.h>
int main()
{
    int a,b,i,j,c,d,num[10],even[10],odd[10];

    printf("\n ENTER ANY 10 NUMBERS : ");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(num[i]%2==0)
        {
            even[i]==num[i];
        }
        else
        {
            odd[i]==num[i];
        }
    }
    printf("even numbers.");
    for(i=0;i<=9;i++)
    {
        printf("\n%d",even[i]);
    }
    printf("\nodd numbers.");
    for(i=0;i<=9;i++)
    {
        printf("\n%d",odd[i]);
    }
    return 0;
}
