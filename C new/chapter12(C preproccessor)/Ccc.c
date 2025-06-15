#include<stdio.h>
int main()
{
    int d=0,e=0 ;\
    char c;\
    d=90-c; e=122-d;\
    printf("%c",e);
}

//Macros for "Cc.c"
#include"Cc2.h"
#define MEAN(x,y) printf("\n%f",(x+y)/2);
#define ABSOLUTE(x) printf("\n%d",x*(-1));
#define UPRTOLWR(x) printf("\n%c     %d",x,x);int d=0,e=0 ;\
                    d=90-x; e=122-d;\
                    printf("%c",e); 
#define BIG(x,y) int num=0;\
                        num=x>y?x:y;\
                             printf("\n%d",num);
