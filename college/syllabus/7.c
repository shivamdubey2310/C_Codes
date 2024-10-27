//Write a program to check given char is vowel or consonant.
#include<stdio.h>
int main()
{
    char ch;

    printf("\n ENTER ANY CHARACTER : ");
    scanf("%d",&ch);

    if(ch=='a'||ch=='e'||ch='i'||ch='o'||ch='u')
    {
        printf("\n THE ENTERED CHARACTER IS VOWEL! ");
    }
    else
        printf("\n THE ENTERED CHARACTER IS CONSONANT! ");
    return 0;
}