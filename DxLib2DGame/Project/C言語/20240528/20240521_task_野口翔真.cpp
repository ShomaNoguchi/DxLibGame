#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int i, j;
    int size;
    //�i�����������
    printf("�T�C�Y���������l����͂��A�������̕����ŗ�̂悤�ȎO�p�`��\�����܂��傤\n");
    scanf("%d", &size);
    //���d���[�v�ŕ`��
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size + i; j++)
        {
            //�i�����������ǉ�
            if (j < size - 1 - i)
            {
                printf(" ");
            }
            else
            {
                printf("��");
            }

        }
        printf("\n");
    }

    return 0;
}