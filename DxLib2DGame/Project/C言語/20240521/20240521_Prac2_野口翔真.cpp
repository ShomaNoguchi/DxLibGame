#include<stdio.h>
/*
���\��\�����Ă݂܂��傤�B
�i1�̒i����9�̒i�܂Łj
*/
int main(void)
{
    //�ϐ��錾
    int i, j;
    //���̐���
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            printf("%d �~ %d = %d\n", i + 1, j + 1, (i + 1) * (j + 1));
        }
        //��i���ƕ\��
        printf("\n");
    }


    return 0;
}