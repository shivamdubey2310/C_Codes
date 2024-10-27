/*youngest of the three*/
#include<stdio.h>
int main()
{
    int a,b,c,young=0;

    printf("\nEnter The Age Of Three Persons : ");
    printf("\nAge Of 1st Person : ");
    scanf("%d",&a);
    printf("\nAge Of 2nd Person : ");
    scanf("%d",&b);
    printf("\nAge Of 3rd Person : ");
    scanf("%d",&c);

    if (a<b)//1<2
    {
        if (a<c)//1<3
        {
            young=a;
        }
        else
        {
            young=c;
        }
    }
    else
    {
        if (b<c)
        {
            young=b;
        }
        else
        {
            young=c;
        }
        
    }
    printf("\n%d Is The Youngest.",young);
    return 0;   
    
}
/*oldest among the three.
#include<stdio.h>
int main()
{
    int a,b,c,young=0;

    printf("\nEnter The Age Of Three Persons : ");
    printf("\nAge Of 1st Person : ");
    scanf("%d",&a);
    printf("\nAge Of 2nd Person : ");
    scanf("%d",&b);
    printf("\nAge Of 3rd Person : ");
    scanf("%d",&c);

    if (a<b)//1<2
    {
        if (a<c)//1<3
        {
            young=a;
        }
        else
        {
            young=c;
        }
    }
    else
    {
        if (b<c)
        {
            young=b;
        }
        else
        {
            young=c;
        }
        
    }
    printf("\n%d Is The Youngest.",young);
    return 0;   
    
}*/

//greatest among three number new method.

/*
#include<stdio.h>
int main()
{
    int a,b,c,gre;

    printf("\n ENTER ANY THREE NUMBERS : ");
    scanf("%d%d%d",&a,&b,&c);

    gre=a;
    if (b>a)
    {
        gre=b;
    }
    if (c>b)
    {
        gre=c;
    }
    printf("\n greatest number is %d",gre);
    return 0;
}
*/

