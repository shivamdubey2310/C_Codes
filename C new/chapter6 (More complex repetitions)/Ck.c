//24 HOURS OF A DAY WITH SUITABLE SUFFIXES LIKE AM,PM,NOON,MIDNIGHT

#include<stdio.h>
int main()
{
    int hr;

    printf("\n24 HOURS OF A DAY WITH SUITABLE SUFFIXES LIKE AM,PM,NOON,MIDNIGHT : ");
    
    for(hr=0;hr<=23;hr++)
    {
        if (hr==0)
        {
            printf("\n12 MIDNIGHT");
            continue;
        }
        if (hr<12)
        {
            printf("\n%d AM",hr);
        }
        if (hr==12)
        {
            printf("\n12 NOON") ;
        }
        if (hr>12)
        {
            printf("\n%d PM",hr);
        }
    }
    return 0;
}