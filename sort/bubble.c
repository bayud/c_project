#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../package/header/tool.h"

main(int argc, char const *argv[])
{
    int tmp;
    //char const **input = argv;
    char *inputStr="20 13 21 14 15 41 223 31"; 
    int * sortArray = splitStrToIntArray(inputStr,' ');
    printIntArray(sortArray);
    free(sortArray);
    getchar();
    return 1;
}
