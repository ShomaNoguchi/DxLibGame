#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
    {
        printf("入力した数は 0〜10 までの数です\n");
    }
    if(a < 0 || 10 < a)
    {
        printf("入力した数は 負の数 か10より大きい数です\n");
    }
}