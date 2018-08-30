#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../header/tool.h"
int *splitStrToIntArray(char *str,char split){
    int arrayLength =getLenthFromStr(str,split);
    int* array =(int*)malloc(sizeof(int)*arrayLength+1);
    array[0] = arrayLength;
    int * tmpSort = array+1;
    char tmpStr[10];
    int tmpIndex=0;
    int i,tmp;
    for(i=0;i<strlen(str);i++){
        if(str[i]==' '){
            if(tmpIndex){
                *(tmpStr+tmpIndex)='\0';
                tmp = atoi(tmpStr);
                printf("转化:%d\n",tmp);
                *tmpSort++ = tmp;
            }
            tmpIndex = 0;
        }else{
            tmpStr[tmpIndex++] = str[i];
        }
    }
    if(tmpIndex){
                *(tmpStr+tmpIndex)='\0';
                tmp = atoi(tmpStr);
                printf("转化数字:%d\n",tmp);
                *tmpSort = tmp;
            }
    return array;
}
void printIntArray(int *array){
    int length = array[0];
    if(length<=0){
        return;
    }
    printf("%d",array[1]);
    for(int i=2;i<length+1;i++){
        printf(",%d",array[i]);
    }
    printf("\n");
}
int getLenthFromStr(char *str,char split){
    int length=0;
    char tmp = 0;
    while(*str){
        if(!tmp&&*str!=split){
            length++;
            tmp=1;
        }else if(tmp&&*str==' '){
            tmp=0;
        }
        str++;
    }
    return length;
}