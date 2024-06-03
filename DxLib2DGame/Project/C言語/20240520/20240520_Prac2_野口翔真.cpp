#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#pragma warning (disable:4996)

int main(void)
{
    //変数宣言
    int i;
    int demi_god;
    int insane;
    int de_score=0;
    int in_score=0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //試合内容
    for (i = 0; i < 9; i++)
    {
        demi_god= rand() % 6;
        de_score = de_score + demi_god;

        printf("半神%d回表の時%d点\n", i + 1, demi_god);

        insane = rand() % 6;
        in_score = in_score + insane;

        printf("狂人%d回裏の時%d点\n", i + 1, insane);
    }
    //点数の表示
    printf("狂人%d点\n半神%d点\n", in_score, de_score);
    //点数を比較
    if(de_score == in_score)
    {
        printf("引き分け");
    }

    else if (de_score > in_score)
    {
        printf("半神の勝利", de_score);
    }
    else
    {
        printf("狂人の勝利", in_score);
    }
    return 0;
}