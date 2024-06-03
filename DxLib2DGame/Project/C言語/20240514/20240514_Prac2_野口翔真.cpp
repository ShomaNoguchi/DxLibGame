#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

typedef struct Character
{

    char name[128];
    int HP;
    int MP;
    int ATK;
    int DEF;
    int AGL;

}Character;

int main(void)
{
    //構造体の型を変数
    Character Player;
    Character Enemy;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //PLAYERの名前を入力
    printf("プレイヤーの名前を入力してください。\n");
    scanf("%s", &Player.name);
    //CPUの名前を入力
    printf("敵のモンスターの名前を入力してください。\n");
    scanf("%s", &Enemy.name);
    //各値を生成(PLAYER＆Enemy)
    Player.HP = (rand() % 83) + 18;
    Player.MP = (rand() % 83) + 18;
    Player.ATK = (rand() % 26) + 5;
    Player.DEF = (rand() % 26) + 5;
    Player.AGL = (rand() % 26) + 5;

    Enemy.HP = (rand() % 83) + 18;
    Enemy.MP = (rand() % 83) + 18;
    Enemy.ATK = (rand() % 26) + 5;
    Enemy.DEF = (rand() % 26) + 5;
    Enemy.AGL = (rand() % 26) + 5;

    //ステータスの表示
    printf("名前：%s\nHP：%d\nMP：%d\n攻撃力：%d\n防御力%d\n素早さ%d\n", Player.name, Player.HP, Player.MP, Player.ATK, Player.DEF, Player.AGL);
    //戦闘開始
    int plyAtk, emyAtk;
    int damege;
    //（PLAYER）攻撃方法を選択
    printf("PLAYER TRUN\n攻撃方法を選択してください。\n武器：0　or 魔法：1\n");
    scanf("%d", &plyAtk);
    if (plyAtk == 0)
    {
        damege = Player.ATK - Enemy.DEF;
        printf("武器での攻撃");
    }
    else
    {
        damege = Player.MP - Enemy.MP;
        printf("魔法での攻撃");
    }

    if (damege <= 0)
    {
        damege = 0;
    }
    //HPを計算
    Enemy.HP -= damege;
    printf("%d点のダメージ!%sの残りHP：%d\n", damege, Enemy.name, Enemy.HP);
    printf("Enemy Trun\n");
    //（Enemy）攻撃方法を選択
    emyAtk = rand() % 2;
    if (emyAtk == 0)
    {
        damege = Enemy.ATK - Player.DEF;
        printf("%sは武器で攻撃", Enemy.name);
    }
    else
    {
        damege = Enemy.MP - Player.MP;
        printf("%sは魔法で攻撃", Enemy.name);
    }
    if (damege <= 0)
    {
        damege = 0;
    }
    //HPを計算
    Player.HP -= damege;
    printf("%d点のダメージ!%sの残りHP：%d\n", damege, Player.name, Player.HP);
    //結果表示
    if (Player.HP <= 0 || Enemy.HP <= 0)
    {
        if (Player.HP >= 0)
        {
            printf("%sの勝ちです", Player.name);
        }
        else if (Enemy.HP >= 0)
        {
            printf("%sの勝ちです", Enemy.name);
        }

    }
    else if (Player.HP == Enemy.HP)
    {
        printf("Draw\n");
    }
    else
    {
        if (Player.HP > Enemy.HP)
        {
            printf("%sの勝ちです", Player.name);
        }
        else
        {
            printf("%sの勝ちです", Enemy.name);
        }

    }

    return 0;
}