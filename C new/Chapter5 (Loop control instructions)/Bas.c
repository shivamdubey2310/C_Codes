#include<stdio.h>
int main()
{
    int a,b,c,d,hr,i,j,salary;

    while(i<=10)
    {   
        salary=0;
        printf("\nENTER THE TIME OF WORK DONE BY AN EMPLOYEE : ");
        scanf("%d",&hr);

        if(hr>40)
        {
            salary=(hr-40)*12;
            printf("\nOVERTIME PAYMENT : %d",salary);
        }
        else
        {
            printf("\nYOU DO NOT HAVE ANY OVERTIME PAYMENT.");
        }
    }
    return 0;
}
