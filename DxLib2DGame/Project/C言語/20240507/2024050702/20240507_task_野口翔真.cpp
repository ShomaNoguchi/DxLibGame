#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int ply, emy;   //プレイヤー変数、CPU変数
    int judg;       //勝負判定
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //ランダムな手の生成
    emy = rand() % 2;
    //Player選択
    printf("Eゲーム\n0:King(王様)　1:Citizen(市民)　2:Servant(下僕)し、その中から選びましょう。\n");
    printf("CPUは、0:Kingか1:Citizenを選択\nPLAYERは、1:Citeizenか2:Servantが選べます。\n");
    printf("KingとCitizenでは、Kingの勝ちとなります。\nCitizenとServantでは、Citizenの勝ちになります。\nKingとServantでは、Servantが勝ちとなります。\n");
    printf("PLAYERは手を入力してください。\n");
    scanf("%d", &ply);
    //入力不可チェック
    if (ply >= 1 && ply <= 2)
    {
        //判定
        printf("PLAYER：%d vs CPU : %d\n", ply, emy);
        judg = ply - emy;
        if (judg == 2)
        {
            printf("PALYER WIN\n");
        }
        else if (judg == 0)
        {
            printf("Draw\n");
        }
        else
        {
            printf("CPU WIN\n");
        }
    }
    else
    {
        printf("入力に誤りがあります。\n");
    }
    return 0;
}