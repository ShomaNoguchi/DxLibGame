
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int ply, emy;   //プレイヤーとCPUの手
    int cal;        //判定結果
    //ランダムな初期化
    srand((unsigned int)time(NULL));
    //ランダム数字を生成
    emy = rand() % 3;
    printf("じゃんけんゲームを作成しましょう。\n0：グー　1：チョキ　2：パーとしてジャンケンゲームをします\nプレイヤーの手を入力してください。\n");
    //printf("%d\n", emy);
    //キーボードから入力
    scanf("%d", &ply);
    //入力不可チェック
    if (ply >= 0 && ply <= 2)
    {
        //手の表示
        switch (ply)
        {
        case 0:
            printf("Playerはグーです\n");
            break;
        case 1:
            printf("Playerはチョキです\n");
            break;
        case 2:
            printf("Playerはパーです\n");
            break;
        }
        switch (emy)
        {
        case 0:
            printf("CPUはグーです\n");
            break;
        case 1:
            printf("CPUはチョキです\n");
            break;
        case 2:
            printf("CPUはパーです\n");
            break;
        }

        //判定
        cal = ply - emy;
        //PLAYERWIN
        if (cal == -1 || cal == 2)
        {
            printf("PLAYER WIN!\n");
        }
        //DRAW
        else if (cal == 0)
        {
            printf("DRAW\n");
        }
        //CPUWIN
        else
        {
            printf("CPU WIN!\n");
        }

    }
    else
    {
        printf("入力に誤りがあります。");
    }
    return 0;
}