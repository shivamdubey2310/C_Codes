//steel grade.
#include<stdio.h>
int main()
{
    float hard,cc,ts;
    int grade=0,con1=0,con2=0,con3=0;

    printf("\nenter HARDNESS,CARBON CONTENT and TENSILE STRENGTH : ");
    scanf("%f%f%f",&hard,&cc,&ts);

    if (hard>50)
    {
        con1=1;
    }
    if (cc<0.7)
    {
        con2=1;
    }
    if (ts>5600)
    {
        con3=1;
    }

    if ((con1==1)&&(con2==1)&&(con3==1))
    {
        grade=10;
    }
    else if ((con1==1)&&(con2==1))
    {
        grade=9;
    }
    else if ((con2==1)&&(con3==1))
    {
        grade=8;
    }
    else if ((con1==1)&&(con3==1))
    {
        grade=7;
    }
    else if ((con1==1)||(con2==1)||(con3==1))
    {
        grade=6;
    }
    else if ((con1==0)&&(con2==0)&&(con3==0))
    {
        grade=5;
    }
    printf("grade obtained by STEEL of :");
    printf("\nHARDNESS : %f",hard);
    printf("\nCARBON CONTENT : %f",cc);
    printf("\nTENSILE STRENGTH : %f",ts);
    printf("\nis %d.",grade);
    return 0;
}