#include<stdio.h>
//二つ追加のおまじない
#include<stdio.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //乱数の初期化
    srand((unsigned int)time(NULL));

    radNumber = rand() % 16;
    printf("ランダムな数字は%dです\n", radNumber)


    return 0;

}