#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int num;
    int sum = 0;
    int cnt = 0;
    //�����̓���
    printf("���[�U�[�ɐ��̐�������͂����܂��傤\n���[�U�[�����̐�������͂����ꍇ�A�v���O�����͓��͂��I�����A���v�l��\�����܂��傤�B\n");
    do
    {
        cnt++;
        printf("��������͂��Ă�������\n");
        scanf("%d", &num);

        sum += num;

        printf("%d��ڂ̓��͂ŁA���v��%d�ƂȂ�܂��B\n", cnt, sum);
    } while (num >= 0);//���͂������������̐����łȂ�����J��Ԃ�
    //���v�����̕\��
    printf("���v������,%d�ł�\n", sum);

    return 0;
}