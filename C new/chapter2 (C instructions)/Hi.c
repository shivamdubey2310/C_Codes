/*currency system */
#include<stdio.h>
int main()
{
    int temp,amount,n100,n50,n10,n5,n2,n1;

    printf("\n ENTER THE AMOUNT : ");
    scanf("%d",&amount);   //476

    temp=amount;
    n100=amount/100;    //4
    amount=amount%100;  //new amount=76
    
    n50=amount/50;      //1
    amount=amount%50;   //new amount=26
    
    n10=amount/10;      //2
    amount=amount%10;  //new amount=6
    
    n5=amount/5;        //1
    amount=amount%5;    //new amount=1
    
    n2=amount/2;        //0
    amount=amount%2;    //new amount=1
    
    n1=amount;          //1
    
    printf("\n THE SMALLEST NUMBER OF NOTES THAT WILL COMBINE TO GIVE THE SUM OF %d IS GIVEN BELOW :-",temp);
    printf("\n NUMBER OF NOTE OF Rs.100 : %d",n100);
    printf("\n NUMBER OF NOTE OF Rs.50 : %d",n50);
    printf("\n NUMBER OF NOTE OF Rs.10 : %d",n10);
    printf("\n NUMBER OF NOTE OF Rs.5 : %d",n5);
    printf("\n NUMBER OF NOTE OF Rs.2 : %d",n2);
    printf("\n NUMBER OF NOTE OF Rs.1 : %d",n1);
}