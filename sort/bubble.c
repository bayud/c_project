#include<stdio.h>
main(int argc, char const *argv[])
{
    /* code */
    printf("参数个数%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("参数%d:",i);
        puts(argv[i]);
    }
    
    getchar();
    return 0;
    
}
