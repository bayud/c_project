#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printIntArray(int *array,int lenth){
    if(lenth<=0){
        return;
    }
    printf("%d",array[0]);
    for(int i=1;i<lenth;i++){
        printf(",%d",array[i]);
    }
}
int getLenthFromStr(char *str){
    int lenth=0;
    char tmp = 0;
    while(*str){
        if(!tmp&&*str!=' '){
            lenth++;
            tmp=1;
        }else if(tmp&&*str==' '){
            tmp=0;
        }
        str++;
    }
    return lenth;
}
main(int argc, char const *argv[])
{
    
    int tmp;
    //char const **input = argv;
    char *inputStr="20 13 21 14 15 41 223 31"; 
    int inputLenth =getLenthFromStr(inputStr);
    // char **input = (char**)malloc(inputLenth*10*sizeof(char)); 
    int* sortArray = (int*)malloc(sizeof(int)*inputLenth);
    
    // scanf("%s",inputStr);
    // stcrtok(inputStr," ");
    /* code */
    // printf("参数个数%d\n",argc);
    int * tmpSort = sortArray;
    char tmpStr[10];
    int tmpIndex=0;
    int i;
    for(i=0;i<strlen(inputStr);i++){
        if(inputStr[i]==' '){
            if(tmpIndex){
                tmp = atoi(tmpStr);
                printf("转化:%d\n",tmp);
                *tmpSort++ = tmp;
            }
            tmpIndex = 0;
        }else{
            tmpStr[tmpIndex++] = inputStr[i];
        }
    }
    if(tmpIndex){
                tmp = atoi(tmpStr);
                printf("转化:%d\n",tmp);
                *tmpSort = tmp;
            }
    printIntArray(sortArray,inputLenth);
    free(sortArray);
    getchar();
    return 1;
    
}
