#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)
/*
�񐔓��ăQ�[��
�����_����10?50�܂ł̐�������������܂��B
�v���C���[�͂��̐����𓖂Ă܂��傤�B
�q���g�Ƃ��āA3�̖񐔂��\������܂��B
���̃q���g�����ɁA���������܂��傤�B
�����ł���܂œ��͂��\�ł��B
*/

int main(void)
{
    //�ϐ��錾
    int target, ans, i = 1, count = 0;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�����_���Ȑ����𐶐�
    target = 13;

    printf("�q���g�͈ȉ��̒ʂ�ł��B\n");
    //�q���g�\��
    while (count < 3 && i <= target)
    {
        //��
        if (target % i == 0)
        {
            printf("%d,", i);
            count++;
        }
        i++;
    }

    printf("\n");


    //�Q�[���X�^�[�g
    while (1)
    {
        printf("�ł́A���𓖂Ă܂��傤\n");

        scanf("%d", &ans);

        if (ans == target)
        {
            printf("�����ł�\n");
            break;
        }
        else
        {
            printf("�s�����ł��B\n");
        }
    }
    return 0;
}

