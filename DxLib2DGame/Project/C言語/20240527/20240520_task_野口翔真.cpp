/*
0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�����쐬���܂��傤�B
CPU�̓����_���ŏ�L�̐�����I�����܂��B
�v���C���[�́A�L�[�{�[�h���琔������͂��܂��B
�v���C���[���������ꍇ�́A�uPLAYER WIN�v�Ƃ��āACPU���������ꍇ�́A�uCPU WIN�v��\�����A�����Ȃ�uDRAW�v��\�����Ă��������B
5�񏟕����s���A���ʂ�\�����܂��傤�B
����F5�񏟕��I���F�������������s
*/
#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int ply, emy;   //�v���C���[��CPU�̎�
    int cal;        //���茋��
    int i;          //���[�v�J�E���g
    int win = 0, Los = 0, Drw = 0;  //���s�J�E���g
    //�����_���ȏ�����
    srand((unsigned int)time(NULL));
    //�����_�������𐶐�
    printf("����񂯂�Q�[�����쐬���܂��傤�B\n");
    //����񂯂�̊J�n

    for (i = 0; i < 5; i++)
    {
        printf("0�F�O�[�@1�F�`���L�@2�F�p�[�Ƃ��ăW�����P���Q�[�������܂�\n�v���C���[�̎����͂��Ă��������B\n");
        emy = rand() % 3;
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
                //�����̑���
                win++;
            }
            //DRAW
            else if (cal == 0)
            {
                printf("DRAW\n");
                //��������
                Drw = Drw + 1;
            }
            //CPUWIN
            else
            {
                printf("CPU WIN!\n");
                //�����̑���
                Los++;
            }

        }
        else
        {
            printf("���͂Ɍ�肪����܂��B\n");
        }

    }

    //���ʕ\��
    printf("5�񏟕��̌��ʁF%d��%d����%d�s\n", win, Drw, Los);
    return 0;
}