#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

typedef struct status
{
    char name[128]; //���O
    int gender;     //����
    int race;       //�푰
    int HP;         //�̗�
    int MP;         //����
    int ATK;        //�U����
    int DEF;        //�h���
    int AGL;        //�f����

}status;


int main(void)
{
    //�\���̂�ϐ��Ƃ��Ē�`
    status chara;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //���O�̓���
    printf("�L�����N�^�[�𐶐����܂��傤�B\n�܂��́A���O�̓��͂ł��B\n");
    scanf("%s", &chara.name);
    //���ʂ̑I��
    printf("���ʂ�I�����Ă��������B\n0�F�j���@1:����");
    scanf("%d", &chara.gender);
    //�\�͐���
    printf("�푰��I�����Ă��������B\n0�F�l�� 1�F�G���t 2�F�h���[�t 3:�z�r�b�g");
    scanf("%d", &chara.race);
    //�푰�̑I��
    chara.HP = (rand() % 39) + 18;
    chara.MP = (rand() % 39) + 18;
    chara.ATK = (rand() % 26) + 5;
    chara.DEF = (rand() % 26) + 5;
    chara.AGL = (rand() % 26) + 5;
    //�푰�ʔ\�͒l�C�����Œᐔ�l�C��
    switch (chara.race)
    {
        //�l��
    case 0:
        chara.HP += 2;
        chara.MP += 2;
        chara.ATK += 2;
        chara.DEF += 2;
        chara.AGL += 2;
        break;
        //�G���t
    case 1:
        chara.HP -= 3;
        chara.MP += 8;
        chara.ATK -= 3;
        chara.DEF -= 3;
        chara.AGL += 8;
        break;
        //�h���[�t
    case 2:
        chara.HP += 8;
        chara.MP -= 8;
        chara.DEF += 8;
        chara.AGL -= 8;
        break;
        //�z�r�b�g
    case 3:
        chara.HP += 8;
        chara.MP -= 4;
        chara.DEF -= 4;
        chara.AGL += 8;
        break;

    }
    //�C��
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

    //�\��

    printf("�L�����N�^�[�̊����ł�\n���O�F%s\n", chara.name);

    switch (chara.gender)
    {
    case 0:
        printf("����:�j��\n");
        break;
    case 1:
        printf("����:����\n");
        break;
    }

    switch (chara.race)
    {
    case 0:
        printf("�l��\n");
        break;
    case 1:
        printf("�G���t\n");
        break;
    case 2:
        printf("�h���[�t\n");
        break;
    case 3:
        printf("�z�r�b�g\n");
        break;
    }

    printf("�̗�:%d\n����:%d\n�U����:%d\n�h���:%d\n�f����:%d", chara.HP, chara.MP, chara.ATK, chara.DEF, chara.AGL);
    return 0;
}