#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

/*
�U���J�n���i����A���@�����j�A����s����ǉ����܂��B
��������������_����0����30�Ő��l�𐶐����Ă��������B
�h�䑤�͑f�����Ŗ������肪�ȏ�Ȃ�A�U��������ł��܂��B
����ȉ��Ȃ�A�U�������������ƂȂ荡�܂Œʂ�̃_���[�W�v�Z�ɂȂ�܂��B
*/

typedef struct Character
{

    char name[128];
    int HP;
    int MP;
    int ATK;
    int DEF;
    int AGL;
    //�����l
    int HIT;

}Character;

int main(void)
{
    //�\���̂̌^��ϐ�
    Character Player;
    Character Enemy;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //PLAYER�̖��O�����
    printf("�v���C���[�̖��O����͂��Ă��������B\n");
    scanf("%s", &Player.name);
    //CPU�̖��O�����
    printf("�G�̃����X�^�[�̖��O����͂��Ă��������B\n");
    scanf("%s", &Enemy.name);
    //�e�l�𐶐�(PLAYER��Enemy)
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

    //�X�e�[�^�X�̕\��
    printf("���O�F%s\nHP�F%d\nMP�F%d\n�U���́F%d\n�h���%d\n�f����%d\n", Player.name, Player.HP, Player.MP, Player.ATK, Player.DEF, Player.AGL);
    //�퓬�J�n
    int plyAtk, emyAtk;     //�U���I����
    int damege;             //�_���[�W�l


    //�iPLAYER�j�U�����@��I��
    printf("PLAYER TRUN\n�U�����@��I�����Ă��������B\n����F0�@or ���@�F1\n");
    scanf("%d", &plyAtk);
    if (plyAtk == 0)
    {
        damege = Player.ATK - Enemy.DEF;
        printf("����ł̍U��");
    }
    else
    {
        damege = Player.MP - Enemy.MP;
        printf("���@�ł̍U��");
    }

    if (damege <= 0)
    {
        damege = 0;
    }
    //�v���C���[�̖����𐶐�
    Player.HIT = rand() % 31;

    if (Enemy.AGL < Player.HIT)
    {
        //HP���v�Z
        Enemy.HP -= damege;
        printf("%d�_�̃_���[�W!%s�̎c��HP�F%d\n", damege, Enemy.name, Enemy.HP);
    }
    else
    {
        printf("�������܂����B\n%s�̎c��HP�F%d\n", Enemy.name, Enemy.HP);
    }

    printf("Enemy Trun\n");

    //�iEnemy�j�U�����@��I��
    emyAtk = rand() % 2;
    if (emyAtk == 0)
    {
        damege = Enemy.ATK - Player.DEF;
        printf("%s�͕���ōU��", Enemy.name);
    }
    else
    {
        damege = Enemy.MP - Player.MP;
        printf("%s�͖��@�ōU��", Enemy.name);
    }
    if (damege <= 0)
    {
        damege = 0;
    }
    //CPU�̖����𐶐�
    Enemy.HIT = rand() % 31;

    if (Player.AGL < Enemy.HIT)
    {
        //HP���v�Z
        Player.HP -= damege;
        printf("%d�_�̃_���[�W!%s�̎c��HP�F%d\n", damege, Player.name, Player.HP);
    }
    else
    {
        printf("�������܂����B\n%s�̎c��HP�F%d\n", Player.name, Player.HP);
    }

    //���ʕ\��
    if (Player.HP <= 0 || Enemy.HP <= 0)
    {
        if (Player.HP >= 0)
        {
            printf("%s�̏����ł�", Player.name);
        }
        else if (Enemy.HP >= 0)
        {
            printf("%s�̏����ł�", Enemy.name);
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
            printf("%s�̏����ł�", Player.name);
        }
        else
        {
            printf("%s�̏����ł�", Enemy.name);
        }

    }

    return 0;
}