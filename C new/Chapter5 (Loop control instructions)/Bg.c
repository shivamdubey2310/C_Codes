//count of positive,negative number or zeroes entered.
#include<stdio.h>
int main()
{
    int pos,neg,zer,num;
    char ans='y';

    pos=neg=zer=0;

    while(ans=='Y'||ans=='y')
    {
        num=0;
        printf("Enter numbers :");
        scanf("%d",&num);

        if (num>0)
        {
            pos++;
        }
        else if (num<0)
        {
            neg++;
        }
        else if (num==0)
        {
            zer++;
        }
        fflush (stdin);  //CLEARS STANDARD INPUT STREAM.

        printf("\nDo you want to enter more numbers ?(y/n)");
        scanf("%c",&ans);
    }
    printf("\n number of positive numbers entered : %d",pos);
    printf("\n number of negative numbers entered : %d",neg);
    printf("\n number of zeroes entered : %d",zer);
    return 0;
}