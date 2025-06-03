#include<stdio.h>
int main()
{
    //initialise array
  int arr1[]={1,2,3,4,5};

  //calculate length of array arr1
  int length=sizeof(arr1)/sizeof(arr1[0]);

  //create another array arr2 with size of arr1

  int arr2[length];

  //copying all elements of one array into another
  for(int i=0;i<length;i++)
  {
    arr2[i]=arr1[i];
  }

  //displaying elements of array arr1
  printf("elements of original array:\n ");
  for(int i=0;i<length;i++)
  {
    printf("%d",arr1[i]);
  }

  printf("\n");

  //dispalying elements of new array arr2
 printf("elements of new array\n");
 for(int i=0;i<length;i++)
 {
    printf("%d",arr2[i]);
 }
 return 0;
}
