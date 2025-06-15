#include<stdio.h>
struct customer
{
  int acno;
  char name[15];
  int blnc;
};
void main()
{
  struct customer c[200];
  int i,x;
  for(i=0;i<200;i++)
  {
    printf("Enter acc. no, name and balance ");
    scanf("%d%s%d",&c[i].acno,c[i].name,&c[i].blnc);
  }
for(i=0;i<200;i++)
{
    printf("\nAccount no. %d",c[i].acno); 
    printf("\nName - %s",c[i].name);
    printf("\nBalance - %d\n",c[i].blnc);
    printf("Press 1 for deposit\n 2 for withdrawal");
    scanf("%d",&x);
    int dp=0;
    if(x==1)
    {
      printf("how many rupees you want to deposit ");
      scanf("%d",&dp);
      c[i].blnc=c[i].blnc+dp;
      printf("Total balance %d",c[i].blnc);
    }
    int wd=0;
    if(x==2)
    { 
      printf("How many rupees you want to withdrawal ");
      scanf("%d",&wd);
      if(wd>c[i].blnc)
      {
        printf("insufficient balance");
      }
      else
      {
        c[i].blnc=c[i].blnc-wd;
        printf("Remaining balance %d",c[i].blnc);
      }
    }
  }
}
