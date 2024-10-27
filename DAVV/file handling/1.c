//PROGRAM TO WRITE IN A FILE. 

#include<stdio.h>
int main()
{
    FILE *fp;
    int i=1;
    char name[20]="rekha";
    
    fp=fopen("abc.txt","w");
    printf("%d\n%s",i,name);
    fclose(fp);
    
    return 0;
}