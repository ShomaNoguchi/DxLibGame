#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    int X;
    printf("1-12までのいずれかのを入力\n");
    scanf("%d", &X);
    switch (X)
    {
    case 1:
        printf("1月は31日です");
        break;
    case 2:
        printf("2月は28日です");
        break;
    case 3:
        printf("3月は31日です");
        break;
    case 4:
        printf("4月は30日です");
        break;
    case 5:
        printf("5月は30日です");
        break;
    case 6:
        printf("6月は30日です");
        break;
    case 7:
        printf("7月は31日です");
        break;
    case 8:
        printf("8月は31日です");
        break;
    case 9:
        printf("9月は30日です");
        break;
    case 10:
        printf("10月は31日です");
        break;
    case 11:
        printf("11月は30日です");
        break;
    case 12:
        printf("12月は31日です");
        break;
    default:
        printf("入力に誤りがあります。");
    }
    return 0;
}