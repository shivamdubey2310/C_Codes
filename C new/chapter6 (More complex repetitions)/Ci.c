//population (copied from soluions).
#include<stdio.h>
#include<math.h>
int main()
{
    int pop,n; 
    float p,r;
    
    p=100000;
    r=10;

    printf("\nCURRENT POPULATION OF THE TOWN : 1000000");
    printf("\nRATE OF INCREASE IN POPULATION PER YEAR : 10 PERCENT ");

    for(n=1;n<=10;n++)
    {
        pop=p/pow((1+r/100),n);
        printf("\nPOPULATION %d YEARS AGO : %d",n,pop);
    }
    return 0;
}
