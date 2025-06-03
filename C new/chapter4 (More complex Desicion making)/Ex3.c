//salary
#include<stdio.h>
int main()
{
    int gen,year,qua,sa;

    printf("\nENTER GENDER YEAR OF SERVICE AND QUALIFICATIONS:");
    printf("\nENTER 1 FOR MALE AND 2 FOR FEMALE :-");
    printf("\nGENDER : ");
    scanf("%d",&gen);
    printf("\nYEAR OF SERVICE : ");
    scanf("%d",&year);
    printf("\nENTER 1 FOR GRADUATE AND 2 FOR POST GRADUATE :-");
    printf("\nQUALIFICATIONS : ");
    scanf("%d",&qua);

    if ((gen==1)&&(year>=10)&&(qua==2))
    {
        printf("salary : 15000");
    }
    else if ((gen==1)&&(year>=10)&&(qua==1)||(gen==1)&&(year<10)&&(qua==2)||(gen==2)&&(year<10)&&(qua==2))
    {
        printf("salary : 10000");
    }
    else if ((gen==1)&&(year<10)&&(qua==1))
    {
        printf("salary : 7000");
    }
    else if ((gen==2)&&(year>=10)&&(qua==2))
    {
        printf("salary : 12000");
    }
    else if ((gen==2)&&(year>=10)&&(qua==1))
    {
        printf("salary : 9000");
    }
    else if ((gen==2)&&(year<10)&&(qua==1))
    {
        printf("salary : 6000");
    }
    return 0;
}