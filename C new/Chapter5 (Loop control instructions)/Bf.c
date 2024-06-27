//MATCHSTICK GAME(copied from solutions).

/*
Write a program to play a matchstick game between user and computer.
Your program should ensure that a computer should always win.
Rules for the game are as follows:

-There are 21 matchsticks.
-The computer asks the player to pick 1,2,3 or 4 matchsticks.
-After the persons picks,the computer does its picking.
-Whoever is forced to pick up the last matchstick loses the game. 
*/

#include<stdio.h>
int main()
{
    int m=21,p,c;

    while (1)
    {
        printf("\n\nNo. of matches left : %d\n",m);
        printf("Pick up 1,2,3 or 4 matches.");
        scanf("%d",&p);         //2

        if (p>4||p<1)
        {
            continue;
        }
        
        m=m-p;                  //m = 19
        printf("No. of matches left : %d\n",m);

        c=5-p;                  // c = 3
        printf("Out of which computer picked up %d\n",c);

        m=m-c;
        if (m==1)
        {
            printf("Number of matches left %d\n\n",m);
            printf("You lost the game !!\n");
            break;
        }
        return 0;
    }
    

}