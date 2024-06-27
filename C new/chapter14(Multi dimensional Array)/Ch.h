#define TRA int a[4][4],b[4][4],i,j,temp,g=0;\
    printf("\nEnter elements of 1st row of the matrix : \n");\
    for ( j= 0,i=0; j < 4; j++)\
    {\
        scanf("%d",&a[i][j]);\
    }\
    printf("\nEnter elements of 2nd row of the matrix : \n");\
    for ( j= 0,i=1; j < 4; j++)\
    {\
        scanf("%d",&a[i][j]);\
    }\
    printf("\nEnter elements of 3rd row of the matrix : \n");\
    for ( j= 0,i=2; j < 4; j++)\
    {\
        scanf("%d",&a[i][j]);\
    }\
    printf("\nEnter elements of 4th row of the matrix : \n");\
    for ( j= 0,i=3; j < 4; j++)\
    {\
        scanf("%d",&a[i][j]);\
    }\
    printf("\nEntered matrix : \n");\
    for ( i= 0; i < 4; i++)\
    {\
        for ( j=0;j<4; j++)\
        {\
            printf("%d\t",a[i][j]);\
        }\
        printf("\n");\
    }\
    for ( i = 0; i <4; i++)\
    {\
        for(j=0;j<4;j++)\
        {\
            b[i][j]=a[j][i];\
        }\
    }\
    printf("\nTransposed matrix : \n");\
    for ( i= 0; i < 4; i++)\
    {\
        for ( j=0;j<4; j++)\
        {\
            printf("%d\t",b[i][j]);\
        }\   
        printf("\n");\
    }\
    for ( i = 0; i <4; i++)\
    {\
        for(j=0;j<4;j++)\
        {\
            if(b[i][j]==a[i][j])\
                g++;\
        }\
    }\
    if (g==16)\
        printf("\nGiven matrix is a symmetric matrix");\
    else\
        printf("\nGiven matrix is not a symmetric matrix");\

    