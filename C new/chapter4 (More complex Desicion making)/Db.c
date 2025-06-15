//ASCII values of characters.
#include<stdio.h>
int main()
{
    char ch;

    printf("\n ENTER ANY CHARACTER : ");
    scanf("%c",&ch);

    if ((ch>=65)&&(ch<=90))
    {
        printf("\nENTERED CHARCTER IS AN UPPER CASE LETTER !");
    }
    else if ((ch>=97)&&(ch<=122))
    {
        printf("\nENTERED CHARCTER IS A LOWER CASE LETTER !");
    }
    else if ((ch>=48)&&(ch<=57))
    {
        printf("\nENTERED CHARCTER IS A DIGIT !");
    }
    else if ((ch>=0)&&(ch<=47)||(ch>=58)&&(ch<=64)||(ch>=91)&&(ch<=96)||(ch>=123)&&(ch<=127))
    {
        printf("\nENTERED CHARCTER IS A SPECIAL SYMBOL!");
    }
    return 0;
    
}