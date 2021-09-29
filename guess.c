//
// Created by lenovo on 2021/9/27.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int high =100;
    int tries =7;
    int in = 0;
    int times=1;
    printf("Now let\'s play the \"Guess the Number\" game\n "
           "I (as a computer) will generate a random number(denoted X) between 1 and %d\n"
           "You have %d tries\n",high,tries); //%d占位符，十进制整数
    srand((unsigned)time(NULL));//重置随机数种子
    int r= rand()%high+1;  //随机生成一个范围内的数
    printf("please input:\n");
    scanf("%d",&in);//玩家输入
    while (times<tries && in!=r)//循环判定
    {
        if(in>r){
            printf("too large\n");
        }else{
            printf("too small\n");
        }
        printf("please input again:\n");
        scanf(" %d",&in);//再次输入
        times++;
    }
    if(in!=r){
        printf("lose\n"
               "the answer is %d",r);
    } else{
        printf("win");
    }
    return 0;
}
