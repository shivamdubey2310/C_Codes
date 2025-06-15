#include<stdio.h>
int main()
{
    int a,b=1,i=1,num,c;

    printf("\nEnter \n1 :- For factorial of a number.");
        printf("\n2 :- To check whether the number is prime or not.");
        printf("\n3 :- To check whether the number is odd or even.");
        printf("\n4 :- Exit.\n");
        scanf("%d",&a);
    
    while (a!=4)
    {
        switch (a)
        {
            case 1:
                //PROGRAM TO CALCULATE FACTORIAL OF A GIVEN NUMBER.
                printf("\nyou entered %d to calculate factorial of a number.",a);
                printf("\n ENTER ANY NUMBER : ");
                scanf("%d",&num);

                for(i=1;i<=num;i++)
                {
                    b=b*i;
                }
                printf("%d",b);
                break;

            case 2:
                printf("\nyou entered %d to check whether the number is prime or not.",a);
                //program to check given number is prime or not.
                printf("\n ENTER ANY NUMBER : ");
                scanf("%d",&num);
                while(i<=num)
                {
                    if(num%i==0)
                    {
                        b++;
                    }
                    i++;
                }

                if(b==2)
                {
                    printf("\n %d IS A PRIME NUMBER!",num);
                }
                else
                {
                    printf("\n %d IS NOT A PRIME NUMBER!",num);
                }
                break;

            case 3: 
                //program to check given number is even or odd.
                printf("\nyou entered %d to check whether the number is even or odd.",a);
                printf("\n ENTER ANY NUMBER : ");
                scanf("%d",&num);

                if(num%2==0)
                {
                    printf("\n THE ENTERED NUMBER %d IS EVEN ",num);
                }
                else
                {
                    printf("\n THE ENTERED NUMBER %d IS ODD ",num);
                }
                break;
            
            case 4:
                printf("\nyou entered %d to exit.",a);
                break;
        }
        fflush(stdin);
        printf("\nEnter \n1 :- For factorial of a number.");
        printf("\n2 :- To check whether the number is prime or not.");
        printf("\n3 :- To check whether the number is odd or even.");
        printf("\n4 :- Exit.\n");
        scanf("%d",&a);
    }
    return 0;
}