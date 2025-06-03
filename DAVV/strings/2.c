//runtime input
#include<stdio.h>
int main()
{
    char name[7],name2[13];  

    printf("\nENTER ANY 6 LETTER NAME : ");
    scanf("%s",name);   //"&" is not used because string itself is a pointer.
    printf("%s",name);

    scanf("%s",name2);  //if "REKHA SHARMA" is input then it will only print rekha i.e. scanf terminates on spaces.  
    printf("%s",name2);
    return 0;
}