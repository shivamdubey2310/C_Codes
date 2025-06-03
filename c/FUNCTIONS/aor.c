//WITHOUT ARGUMENTS AND WITH RETURN VALUE 
#include<stdio.h>
float aor();
int main()
{
    float area;

    area = aor();
    printf("\n AREA OF RECTANGLE IS : %f ",area);
    return 0;
}
float aor()
{
    int breadth,length;
    float area;
    
    printf("\n ENTER VALUE OF BREADTH AND LENGTH : ");
    scanf("%d%d",&breadth,&length);
    area = breadth*length;
    return (area);
}
