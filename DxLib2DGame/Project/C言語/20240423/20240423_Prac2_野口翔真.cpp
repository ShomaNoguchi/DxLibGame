#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#pragma warning(disable:4996)

int main(void)
{
    int pitcher, batter;
    printf("�싅�ՃQ�[��\n�s�b�`���[�̓����鋅��ł��Ԃ���\n0:�X�g���[�g�@1:�J�[�u 2:�X���C�_�[\n");
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�s�b�`���[�̑I��(�����_��)
    pitcher = rand() % 3;
    //�o�b�^�[�i�v���C���[�j�̑I��
    scanf("%d", &batter);
    //Hit��Out���𔻒�E�\��
    printf("�s�b�`���[�̋����%d�ł����B\n", pitcher);

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