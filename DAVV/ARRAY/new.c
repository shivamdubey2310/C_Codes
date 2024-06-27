#include<stdio.h>
int main()
{
    int a,b,i,j=0,k=0,c,d,num[10],even[j],odd[k];

    printf("\n ENTER ANY 10 NUMBERS : ");

    for(i=0;i<=9;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=9;i++)
    {
        if(num[i]%2==0)
        {
            even[j]=num[i];//even[1]=num[2]
            j++;
        }
        else
        {
            printf("even mbers.");
            odd[k]=num[i];
            k++;
        }
    }
    printf("even numbers.");
    c=j;
    b=k;
    for(j=0;j<c;j++)
    {
        printf("\n%d",even[j]);
    }
    printf("\nodd numbers.");
    for(k=0;k<b;k++)
    {
        printf("\n%d",odd[k]);
    }
    printf("\n%d          %d",j,k);
    return 0;
}
