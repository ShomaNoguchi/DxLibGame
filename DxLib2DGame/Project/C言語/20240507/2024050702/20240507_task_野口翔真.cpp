#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int ply, emy;   //�v���C���[�ϐ��ACPU�ϐ�
    int judg;       //��������
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�����_���Ȏ�̐���
    emy = rand() % 2;
    //Player�I��
    printf("E�Q�[��\n0:King(���l)�@1:Citizen(�s��)�@2:Servant(���l)���A���̒�����I�т܂��傤�B\n");
    printf("CPU�́A0:King��1:Citizen��I��\nPLAYER�́A1:Citeizen��2:Servant���I�ׂ܂��B\n");
    printf("King��Citizen�ł́AKing�̏����ƂȂ�܂��B\nCitizen��Servant�ł́ACitizen�̏����ɂȂ�܂��B\nKing��Servant�ł́AServant�������ƂȂ�܂��B\n");
    printf("PLAYER�͎����͂��Ă��������B\n");
    scanf("%d", &ply);
    //���͕s�`�F�b�N
    if (ply >= 1 && ply <= 2)
    {
        //����
        printf("PLAYER�F%d vs CPU : %d\n", ply, emy);
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
        printf("���͂Ɍ�肪����܂��B\n");
    }
    return 0;
}