
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int ply, emy;   //�v���C���[��CPU�̎�
    int cal;        //���茋��
    //�����_���ȏ�����
    srand((unsigned int)time(NULL));
    //�����_�������𐶐�
    emy = rand() % 3;
    printf("����񂯂�Q�[�����쐬���܂��傤�B\n0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�������܂�\n�v���C���[�̎����͂��Ă��������B\n");
    //printf("%d\n", emy);
    //�L�[�{�[�h�������
    scanf("%d", &ply);
    //���͕s�`�F�b�N
    if (ply >= 0 && ply <= 2)
    {
        //��̕\��
        switch (ply)
        {
        case 0:
            printf("Player�̓O�[�ł�\n");
            break;
        case 1:
            printf("Player�̓`���L�ł�\n");
            break;
        case 2:
            printf("Player�̓p�[�ł�\n");
            break;
        }
        switch (emy)
        {
        case 0:
            printf("CPU�̓O�[�ł�\n");
            break;
        case 1:
            printf("CPU�̓`���L�ł�\n");
            break;
        case 2:
            printf("CPU�̓p�[�ł�\n");
            break;
        }

        //����
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
        printf("���͂Ɍ�肪����܂��B");
    }
    return 0;
}