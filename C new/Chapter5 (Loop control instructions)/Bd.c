// WAP TO PRINT ALL THE ASCII VALUES AND THEIR EQUIVALENT CHARACTERS.
#include<stdio.h>
int main()
{
    int i=0;
    
    while(i<=255)
    {
        printf("%d---->%c\n\n",i,i);
        i++;
    }
    return 0;
}