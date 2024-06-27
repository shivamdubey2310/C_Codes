// BUFFER OVERFLOW.
#include<stdio.h>
int main()
{
    char name[5];

    printf("\nENTER ANY 8 LETTER NAME : "); 
    gets(name);         //IF ENTERED STRING HAS MORE CHARACTER THAN SPECIFIED THAN IT WILL OVERLAP OTHER VALUES AND PRINT THAT VALUE.
    puts(name);
}