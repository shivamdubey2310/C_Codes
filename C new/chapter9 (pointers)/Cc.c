//Sin X expansion.(copied from solutions)
#include<stdio.h>
#include<math.h>

float numerator(float,int);
float denominator(int);
int main()
{
    float n,x,a,b,sum=0;
    int i,j;

    printf("\nEnter the number x : ");
    scanf("%f",&x);                         //4

    for(i=1,j=1;i<=10;i++,j+=2)             //at i=1 and j=1;               //at i=2 and j=3; 
    {
        a=numerator(x,j);                   //a=numerator(4,1)              //a=numerator(4,3)
        b=denominator(j);                   //b=denominator(1)              //b=denominator(4)
        n=a/b;                              //n=4/1=4                       //n=64/6;
        (i%2==0)?sum=sum-n:(sum=sum+n);     //1%2!=0   sum=0+4; sum=4;      //2%2==0    sum=4-10.666667 sum=6.666667
    }
    printf("sum=%f\n",sum);                 //print(sum at last (at j=10));
    return 0;
}

/*Calculate Power*/

float numerator(float y,int j)
{
    float k=1;
    int m;

    for(m=1;m<=j;m++)                       //at m=1;                        //at m=1,2,3;
    {
        k*=y;                               //k=1*4;                         //at m=1; k=1*4;k=4  at m=2; k=4*4;k=16  at m=3; k=16*4;k=64;  
    }
    return(k);                              //return(4)                      //return(64)
}

/*calculate factorial*/
float denominator(int j)
{
    int m;
    float h=1;

    for(m=1;m<=j;m++)                       //at m=1;                             //at m=1,2,3; 
    {
        h=h*m;                              //h=1*1;                              //at m=1; h=1*1;h=1 at m=2; h=1*2;h=2  at m=3; h=2*3;h=6;
    }
    return(h);                             //return(1)                            //return(6);
}