#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int ply, emy;
    int prod;       //�m��
    int Strike = 0, Ball = 0, Out = 0, Hit = 0;     //�싅�̃J�E���g
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�싅�ՃX�^�[�g
    printf("�싅�ՃQ�[���X�^�[�g�ł�\n");
    printf("�v���C���[�̓s�b�`���[�ƂȂ�A���̉�����؂��Ă�������\n");
    do
    {
        printf("�����鋅��I��ł�������\n0:�X�g���[�g1:�J�[�u2:�X���C�_�[3:�V���J�[\n");
        //�����鋅���I���i���̓`�F�b�N�j
        while (true)
        {
            scanf("%d", &ply);
            if (0 > ply || 3 < ply)
            {
                printf("���͂Ɍ�肪����܂��B�ēx���͂��Ă��������B\n");
            }
            else
            {
                break;
            }

        }
        //CPU�����_���I��
        emy = rand() % 4;
        //�m���v�Z
        prod = rand() % 4;
        //����
        //�قȂ�΃X�g���C�N�i75���j�{�[���i25%�j
        if (ply != emy)
        {
            if (prod == 0)
            {
                printf("�{�[���I\n");
                Ball++;
            }
            else
            {
                printf("�X�g���C�N�I�I\n");
                Strike++;
            }

        }
        //�����Ȃ�Hit(75%) or Out(25%)
        else
        {
            Strike = 0;
            Ball = 0;
            if (prod == 1)
            {
                printf("OUT!!!\n");
                Out++;
            }
            else
            {
                printf("HIT!!\n");
                Hit++;
            }

        }

        if (Strike >= 3 || Ball >= 4)
        {
            if (Strike >= 3)
            {
                Out++;
            }
            else
            {
                Hit++;
            }
            Strike = 0;
            Ball = 0;
        }
        //3�A�E�g��4�q�b�g�܂ŌJ��Ԃ�
        printf("B:%d\nS:%d\nO:%d\nRuinner:%d\n", Ball, Strike, Out, Hit);
    } while (Out < 3 && Hit < 4);

    //�����I
    if (Out >= 3)
    {
        printf("PLAYER WINNER�I�I\n");
    }
    else
    {
        printf("CPU WINNER!!\n");
    }
    return 0;
}