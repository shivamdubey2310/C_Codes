#include<stdio.h>
struct customer
{
    int acno;
    char name[15];
    int blnc;
};
void show(int x,char y[15],int z)
{
    printf("\nAccount no. %d",x);
    printf("\nName - %s",y);
    printf("\n Balance - %d\n",z);
}
void main()
{
    struct customer c[200];
    int i;
    for(i=0;i<200;i++)
    {
        printf("Enter acc. no, name and balance ");
        scanf("%d%s%d",&c[i].acno,c[i].name,&c[i].blnc);
    }
    for(i=0;i<200;i++)
    {
        if(c[i].blnc<100)
        {
            show(c[i].acno,c[i].name,c[i].blnc);
        }
    }
}
