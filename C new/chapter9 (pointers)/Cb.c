//Average and percentage of 3 students.
//error
#include<stdio.h>
int ave(int,int,int,float *,float *);
int main()
{
    int a,b,c;
    float avg,per;

    printf("\nEnter marks of student in first subject : ");
    scanf("%d",&a);

    printf("\nEnter marks of student in second subject : ");
    scanf("%d",&b);

    printf("\nEnter marks of student in third subject : ");
    scanf("%d",&c);

    ave(a,b,c,&avg,&per);

    printf("\nAverage : %f\nPercentage : %f",avg,per);
    return 0;
}

int ave(int p,int q,int r,float *avg,float *per) 
{
    //*avg=p+q+r/3;
    *avg=*per=(p+q+r)/3;
    
}