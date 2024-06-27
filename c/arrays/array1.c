#include<stdio.h>
int main()
{
  int a[3],i;

  printf("\nENTER ELEMENTS OF ARRAY\n");
  
  for(i=0;i<3;i++)
  {
    scanf("%d",&a[i]);
  }
  
  for(i=0;i<3;i++)
  {
    printf("%d\t",a[i]);
  }
  return 0;
}