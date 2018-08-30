#include <stdio.h>
#include"package/header/tool.h"
main(int argc, char const *argv[])
{
    /* code */
    int a=6,b=5,c=7,d=8;
    char f = (-a,b>a--&&c>d);
    int e = (-a,b>a--&&c>d)?d++:a>b;
    printf("**a*******%d",e);
    return 0;
}
