#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int X;
    scanf("%d", &X);
    if (X % 2 == 0)
    {
        printf("偶数が入力されました\n");
    }
    else
    {
        printf("奇数が入力されました\n");
    }
    return 0;
}