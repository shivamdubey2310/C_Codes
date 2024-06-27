//grace marks 

#include<stdio.h>
int main()
{
    int class,sub,grace,marks=0,i;

    printf("\nEnter the class : ");
    scanf("%d",&class);
    printf("\nEnter the number of subjects he failed : ");
    scanf("%d",&sub);

    switch(class)
    {
        case 1 :
            
            if (sub<=3)
            {
                for ( i = 1; i <= sub; i++)
                {
                    marks=marks+5;
                }
                printf("\nGRACE MARKS = %d",marks);
            }
            else
            {
                printf("\nTHE STUDENT DOES NOT GET ANY GRACE!");
            }
            break;

        case 2 :
            if (sub<=2)
            {
                for ( i = 1; i <=sub; i++)
                {
                    marks=marks+4;
                }
                printf("\nGRACE MARKS = %d",marks);
            }
            else
            {
                printf("\nTHE STUDENT DOES NOT GET ANY GRACE!");
            }
            break;

        case 3 :
        if (sub<=1)
            {
                marks=marks+5;
                printf("\nGRACE MARKS = %d",marks);
            }
            else
            {
                printf("\nTHE STUDENT DOES NOT GET ANY GRACE!");
            }
            break;
    }
    return 0;
}