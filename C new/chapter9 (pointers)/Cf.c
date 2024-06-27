//Area of triangle vertices.
//incorrect but error free. 
#include<stdio.h>
#include<math.h>

float DISTANCE(float,float,float,float);
float AREA(float,float,float);
float FUN();

int main()
{
    float x1,x2,y1,y2,x3,y3,d1,d2,d3,area;

    printf("\nEnter vertices of 1st side of the triangle : ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter vertices of 2nd side of the triangle : ");
    scanf("%f%f",&x2,&y2);
    printf("\nEnter vertices of 3rd side of the triangle : ");
    scanf("%f%f",&x3,&y3);

    d1=DISTANCE(x1,x2,y1,y2);
    d2=DISTANCE(y1,y2,x3,y3);
    d3=DISTANCE(x1,x2,x3,y3);

    area=AREA(d1,d2,d3);
    printf("\nd1=%f\nd2=%f\nd3=%f",d1,d2,d3);
    printf("\narea = %f",area);
    return 0;
}

// function for distance 
float DISTANCE(float v1,float v2,float v3,float v4)
{
    float s1,dist;

    s1=pow(v2-v1,2)+pow(v4-v3,2); 
    dist=sqrt(s1);                
    return (dist);
}

//function for area. 

float AREA(float x,float y,float z)
{
    float sp,sp1,sp2;

    sp=(x+y+z)/2;
    sp1=sp*(sp-x)*(sp-y)*(sp-z);
    sp2=sqrt(sp1);
    return (sp2);
}

