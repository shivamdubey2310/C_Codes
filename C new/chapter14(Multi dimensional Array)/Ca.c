/*How will you initialize a three-dimensional array
three[3][2][3]? How will you refer the first and last element
in this array?*/
#include<stdio.h>
int main()
{
    int three[3][2][3] = {
                            {
                                {2, 4, 3},
                                {6, 8, 2}
                            },
                            {
                                {2, 4, 3},
                                {6, 8, 2}
                            },
                            {
                                {2, 4, 3},
                                {6, 8, 2}
                            }
                           };

}
/*
The first element of array is a[0][0][0] OR ***a
The last element of array is a[2][1][2] OR *(*(*(a+2)+1)+2)
*/