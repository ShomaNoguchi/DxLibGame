#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
    {
        printf("���͂������� 0�`10 �܂ł̐��ł�\n");
    }
    if(a < 0 || 10 < a)
    {
        printf("���͂������� ���̐� ��10���傫�����ł�\n");
    }
}