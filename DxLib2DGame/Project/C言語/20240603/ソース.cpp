#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int i;
    int num;
    //�������
    printf("������͂��Ă���������");
    scanf("%d", &num);
    //�񐔂̌v�Z
    printf("�u%d�v�̖񐔂�", num);
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            printf("%d", i);
    }
    printf("�ł��B\n");

    return 0;
}