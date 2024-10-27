/*Write macro definitions with arguments for calculation of
area and perimeter of a triangle, a square and a circle. Store
these macro definitions in a file called “areaperi.h”. Include
this file in your program, and call the macro definitions for
calculating area and perimeter for different squares, triangles
and circles.
*/
#include<stdio.h>
#include"areaperi.h"

int main()
{
    float r,s,l,b;
    printf("\nEnter the radius of circle : ");
    scanf("%f",&r);
    AREAPERIC(r)
    printf("\nEnter the side of square : ");
    scanf("%f",&s);
    AREASPERIS(s)
    printf("\nEnter the length and breadth of a rectangle : ");
    scanf("%f%f",&l,&b);
    AREASPERIR(l,b)
    return 0;
}