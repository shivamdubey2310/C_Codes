#include<stdio.h>
int main()
{
    int n,c,d,a[100],b[100];
    printf("enter the number of elements of array");
    scanf("%d",&n);
    printf("\n enter the array elements");
    for(c=0;c<n;c++)
    scanf("%d",&a[c]);
    for(c=n-1,d=0;c>=0;c--,d++)
    b[d]=a[c];
    for(c=0;c<n;c++)
    a[c]=b[c];
    printf("\n reverse arrayis");
    for(c=0;c<n;c++)
    printf("\n %d",a[c]);
    return 0;
}