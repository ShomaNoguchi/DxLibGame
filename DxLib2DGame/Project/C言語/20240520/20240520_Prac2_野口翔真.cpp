#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#pragma warning (disable:4996)

int main(void)
{
    //�ϐ��錾
    int i;
    int demi_god;
    int insane;
    int de_score=0;
    int in_score=0;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //�������e
    for (i = 0; i < 9; i++)
    {
        demi_god= rand() % 6;
        de_score = de_score + demi_god;

        printf("���_%d��\�̎�%d�_\n", i + 1, demi_god);

        insane = rand() % 6;
        in_score = in_score + insane;

        printf("���l%d�񗠂̎�%d�_\n", i + 1, insane);
    }
    //�_���̕\��
    printf("���l%d�_\n���_%d�_\n", in_score, de_score);
    //�_�����r
    if(de_score == in_score)
    {
        printf("��������");
    }

    else if (de_score > in_score)
    {
        printf("���_�̏���", de_score);
    }
    else
    {
        printf("���l�̏���", in_score);
    }
    return 0;
}