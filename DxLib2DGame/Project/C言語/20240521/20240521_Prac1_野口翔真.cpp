#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int i;              //���[�v�J�E���g
    int num, tmp = 0;    //���̒l�A�J�E���g
    //�������
    printf("������͂��Ă��������B\n");
    scanf("%d", &num);
    //�����J��Ԃ�
    for (i = 0; i < num; i++)
    {
        //printf("%d�@", tmp);
        ////�J�E���g�ŕ\���i�������A9�ɂȂ�����0�ɖ߂��j
        //tmp++;
        //if (tmp > 9)
        //{
        //    tmp = 0;
        //    printf("\n");
        //}

        //�ʉ�
        printf("%d\n", i % 10);

    }
    return 0;
}