#include<stdio.h>
#pragma warning(disable:4996)
/*
�T�C�Y���������l����͂��A�������̕����ŁA���̃T�C�Y�́~���\������v���O�������쐬���Ȃ����B
�T�C�Y 3 �̗�

X X

  X

X X

*/
int main(void)
{
    //�ϐ��錾
    int i, j;
    int size;
    //�i������
    printf("���i�̐}�`���쐬���܂����H");
    scanf("%d", &size);
    //�}�`��\��
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            //0�������͂��̌��̎���X��\������
            if (i == j || (size - i - 1) == j)
            {
                printf("X");
            }
            //����ȊO�͋�
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    return 0;
}