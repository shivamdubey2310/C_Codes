/*Write down macro definitions for the following:
1. To test whether a character entered is a small case letter or
not.
2. To test whether a character entered is a upper case letter or
not.
3. To test whether a character is an alphabet or not. Make
use of the macros you defined in (1) and (2) above.
4. To obtain the bigger of two numbers.
*/
//MAcros like ISUPPER,ISLOWER,ISALPHA AND BIG
#include<stdio.h>
#define ISUPPER(x) (x>=65&&x<=90?1:0)
#define ISLOWER(x) (x>=97&&x<=122?1:0)
#define ISALPHA(x) (ISUPPER(x)||ISLOWER(x))
#define BIG(x,y) (x>y?x:y)

int main()
{
    char ch;
    int d,a,b;
    printf("\nEnter any alphabet/character : ");
    scanf("%c",&ch);

    if (d=ISUPPER(ch)==1)
    {
        printf("\nYou entered a capital letter ");
    }
    else if (d=ISLOWER(ch)==1)
    {
        printf("\nYou entered a small letter");
    }
    else if (d=ISALPHA(ch)!=1)
    {
        printf("\nYou entered a character other than a alphabet ");
    }
    
    printf("\n\nEnter any two numbers :");
    scanf("%d%d",&a,&b);

    d=BIG(a,b);
    printf("\nBigger number is %d",d);
    return 0;
}