#include<stdio.h>
main(int argc, char const *argv[])
{
    /* code */
    printf("��������%d\n",argc);
    for(int i=0;i<argc;i++){
        printf("����%d:",i);
        puts(argv[i]);
    }
    
    getchar();
    return 0;
    
}
