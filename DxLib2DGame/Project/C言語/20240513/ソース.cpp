#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    int H;
    printf("�O�[:1�`���L:2�p�[:3 �̂����ꂩ�����:");
    scanf("%d", &H);
    switch (H)
    {
     case  1:
        printf("�O�[");
        break;
     case  2:
         printf("�`���L");
         break;
     case  3:
         printf("�p�[");
         break;
     default:
         printf("1-3�ȊO�����͂���܂���");
    }
    return 0;
}