#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#pragma warning(disable:4996)

int main(void)
{
    int pitcher, batter;
    printf("野球盤ゲーム\nピッチャーの投げる球を打ち返そう\n0:ストレート　1:カーブ 2:スライダー\n");
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ピッチャーの選択(ランダム)
    pitcher = rand() % 3;
    //バッター（プレイヤー）の選択
    scanf("%d", &batter);
    //HitかOutかを判定・表示
    printf("ピッチャーの球種は%dでした。\n", pitcher);

    if (pitcher == batter)
    {
        printf("Hit!\n");
    }
    else
    {
        printf("Out!\n");
    }

    return 0;
}