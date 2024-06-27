//REVERSE A FIVE DIGIT NUMBER AND CHECK 
//WHETHER IT IS DIFFERENT WITH THE ORIGINAL NUMBER.

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,temp,num,rev;

    printf("\nEnter Any 5 Digit Number:");
    printf("\nNumber : ");
    scanf("%d",&num);   //12345

    temp=num;

    a=num/10000;     //1        1st digit
    b=num%10000;     //2345
    c=b/1000;        //2        2nd digit
    d=b%1000;        //345
    e=d/100;         //3        3rd digit
    f=d%100;         //45
    g=f/10;          //4        4th digit
    h=f%10;          //5        5th digit

    rev=(h*10000)+(g*1000)+(e*100)+(c*10)+a;

    printf("\nReversed Order Is : %d",rev);

    if (temp==rev)
    {
        printf("\n%d==%d",temp,rev);
        printf("\nEntered Number Is EQUAL To The Reversed Number.");
    }
    else
    {
        printf("\n%d!=%d",temp,rev);
        printf("\nEntered Number Is NOT EQUAL To The Reversed Number.");
    }
    return 0;
}