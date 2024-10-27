//WITHOUT ARGUMENTS AND WITH RETURN VALUE 
#include<stdio.h>
int vote();
int main()
{
    int age;
    age=vote();
    if(age>=18)
    printf("YOU ARE ELIGIBLE\n");
    else
    printf("YOU ARE NOT ELIGIBLE\n");
    return 0;
}
int vote()
{
    int age;
    printf("\n ENTER YOUR AGE:");
    scanf("%d",&age);
    return (age);
}