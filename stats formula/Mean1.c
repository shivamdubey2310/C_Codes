//Calculator for finding mean of discrete ungrouped data.
#include<stdio.h>
int main()
{
    int n,xi[n],i,fi[n],fixi[n];
    float sfixi=0.0,sfi=0.0;
    float mean;
    printf("\nEnter the number of data : ");
    scanf("%d",&n);
    // printf("%d",n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            printf("\nEnter 1st element of column xi\n",i+1);
            scanf("%d",&xi[i]);
            printf("\nEnter 1st element of column fi (enter frequency)\n",i+1);
            scanf("%d",&fi[i]);
        }
        else    
        {
            printf("\nEnter next element of column xi\n",i+1);
            scanf("%d",&xi[i]);
            printf("\nEnter next element of column fi (enter frequency)\n",i+1);
            scanf("%d",&fi[i]);
        }
        sfi=sfi+fi[i];
        fixi[i]=fi[i]*xi[i];
        sfixi=sfixi+fixi[i];
         
    }
    // printf("\nsfixi=%d",sfixi);
    // printf("\nsfi = %d",sfi);
    mean=sfixi/sfi;
    printf("\nMean is %f",mean);
    return 0;
} 