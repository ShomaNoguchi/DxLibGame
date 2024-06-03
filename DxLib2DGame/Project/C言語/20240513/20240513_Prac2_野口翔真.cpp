#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

typedef struct status
{
    char name[128]; //名前
    int gender;     //性別
    int race;       //種族
    int HP;         //体力
    int MP;         //魔力
    int ATK;        //攻撃力
    int DEF;        //防御力
    int AGL;        //素早さ

}status;


int main(void)
{
    //構造体を変数として定義
    status chara;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //名前の入力
    printf("キャラクターを生成しましょう。\nまずは、名前の入力です。\n");
    scanf("%s", &chara.name);
    //性別の選択
    printf("性別を選択してください。\n0：男性　1:女性");
    scanf("%d", &chara.gender);
    //能力生成
    printf("種族を選択してください。\n0：人間 1：エルフ 2：ドワーフ 3:ホビット");
    scanf("%d", &chara.race);
    //種族の選択
    chara.HP = (rand() % 39) + 18;
    chara.MP = (rand() % 39) + 18;
    chara.ATK = (rand() % 26) + 5;
    chara.DEF = (rand() % 26) + 5;
    chara.AGL = (rand() % 26) + 5;
    //種族別能力値修正＆最低数値修正
    switch (chara.race)
    {
        //人間
    case 0:
        chara.HP += 2;
        chara.MP += 2;
        chara.ATK += 2;
        chara.DEF += 2;
        chara.AGL += 2;
        break;
        //エルフ
    case 1:
        chara.HP -= 3;
        chara.MP += 8;
        chara.ATK -= 3;
        chara.DEF -= 3;
        chara.AGL += 8;
        break;
        //ドワーフ
    case 2:
        chara.HP += 8;
        chara.MP -= 8;
        chara.DEF += 8;
        chara.AGL -= 8;
        break;
        //ホビット
    case 3:
        chara.HP += 8;
        chara.MP -= 4;
        chara.DEF -= 4;
        chara.AGL += 8;
        break;

    }
    //修正
    if (chara.HP < 15)
    {
        chara.HP = 15;
    }
    else if (chara.MP < 15)
    {
        chara.MP = 15;
    }
    else if (chara.ATK < 5)
    {
        chara.ATK = 5;
    }
    else if (chara.DEF < 5)
    {
        chara.DEF = 5;
    }
    else if (chara.AGL < 5)
    {
        chara.AGL = 5;
    }

    //表示

    printf("キャラクターの完成です\n名前：%s\n", chara.name);

    switch (chara.gender)
    {
    case 0:
        printf("性別:男性\n");
        break;
    case 1:
        printf("性別:女性\n");
        break;
    }

    switch (chara.race)
    {
    case 0:
        printf("人間\n");
        break;
    case 1:
        printf("エルフ\n");
        break;
    case 2:
        printf("ドワーフ\n");
        break;
    case 3:
        printf("ホビット\n");
        break;
    }

    printf("体力:%d\n魔力:%d\n攻撃力:%d\n防御力:%d\n素早さ:%d", chara.HP, chara.MP, chara.ATK, chara.DEF, chara.AGL);
    return 0;
}