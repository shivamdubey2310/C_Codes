/*Twenty-five numbers are entered from the keyboard into an
array. Write a program to find out how many of them are
positive, how many are negative, how many are even and how
many odd.
*/
#include<stdio.h>
int main()
{
    int a[25],pos=0,neg=0,even=0,zeroes=0,odd=0,i;

    printf("\nEnter elements of array : ");
    for (i = 0; i < 25; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 25; i++)
    {
        if (a[i]>=0)
        {
            pos++;
        }
        else if (a[i]<=0)
        {
            neg++;
        }
        else if (a[i]==0)
        {
            zeroes++;
        }
        
        if (a[i]%2==0)
        {
            even++;
        }
        else 
        {
            odd++;
        }
    }
    printf("\n no. of positive digits : %d ",pos);
    printf("\n no. of negative digits : %d ",neg);
    printf("\n no. of zeroes : %d ",zeroes);
    printf("\n no. of even digits : %d ",even);
    printf("\n no. of odd digits : %d ",odd);
    return 0;
}