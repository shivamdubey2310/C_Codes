#include<stdio.h>
int main()
{
    char name;
   
    printf("\n enter first letter of your name: ");
    scanf("%c",&name);
    switch (name)
    {
    case 'k':
    case 'K':
           printf("\nHELLO KAMAL :) ");
           
           break;
    case 'a':
    case 'A':
           printf("\n HELLO AARTI :) ");
                      
           break;
    case 's':
    case 'S':
           printf("HELLO SHIVAM :) ");
           
        break;
    case 'n':
    case 'N':
           printf("\n HELLO NISHITA :) ");
           
           break;
    }
    
    
    return 0;
}