// whether the character is lower case alphabet or not.
// whether the character is a symbol or not.
#include<stdio.h>
int main()
{
    char ch;

    printf("\nEnter Any Character.");
    scanf("%c",&ch);

    (ch>=97)&&(ch<=122)?printf("\n%c Is A Lower Case Alphabet",ch):printf("\n%c Is An Upper Case Alphabet",ch);

    return 0;
} 

/*
// whether the character is a symbol or not.
#include<stdio.h>
int main()
{
    char ch;

    printf("\nEnter Any Character.");
    scanf("%c",&ch);

    ((ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127))?printf("\n%c Is A Special Symbol.",ch):printf("%c Is Not A Special Symbol.");
    return 0;
} 
*/