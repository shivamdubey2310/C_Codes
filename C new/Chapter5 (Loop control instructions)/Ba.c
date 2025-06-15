#include<stdio.h>
int main()
{
    int a,b,c,d,hr,i,j,salary;

    for (i=1;i<=10;i++)
        {   
            salary=0;
            printf("\nENTER THE TIME OF WORK DONE BY AN EMPLOYEE : ");
            scanf("%d",&hr);

            if(hr>40)
            {
                for (j=0;j<hr-40;j++)
                {
                    salary=salary+12;
                }
                printf("\nOVERTIME PAYMENT : %d",salary);
            }
            else
            {
                printf("\nYOU DO NOT HAVE ANY OVERTIME PAYMENT.");
            }
        }
    return 0;
}
