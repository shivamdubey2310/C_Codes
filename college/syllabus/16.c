//Write a program to print series of alphabet.

#include<stdio.h>
int main()
{
    char b,c;

    printf("\n ENTER u FOR UPPER CASE AND l FOR LOWER CASE :");
    scanf("%c",&c);

    if (c=='u'||c=='U')
    {
        for(b='A';b<='Z';b++)
        {
            printf("\t%c",b);
        }
    }

    else
    if(c=='l'||c=='L')
    {
        for(b='a';b<='z';b++)
        {
            printf("\t%c",b);
        }
    }    

    else
    {
        printf("\n YOU ENTERED INVALID CHARACTER!");
    }
    return 0;
}