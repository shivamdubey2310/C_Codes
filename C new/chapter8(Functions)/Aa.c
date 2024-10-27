#include<stdio.h>
void display();
int main()
{
    printf("Learn C\n");
    display();
    return 0;   
}
void display()
{
    printf("Followed by C++,c# and Java!\n");
    main();
}
/*
output:-
Learn C
Followed by C++,c# and Java!
Learn C
Followed by C++,c# and Java!
Learn C
Followed by C++,c# and Java!
...........
indefinitely
*/