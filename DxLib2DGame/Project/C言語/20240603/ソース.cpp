#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int i;
    int num;
    //数を入力
    printf("数を入力してください＝");
    scanf("%d", &num);
    //約数の計算
    printf("「%d」の約数は", num);
    for (i = 1; i <= num; ++i)
    {
        if (num % i == 0)
            printf("%d", i);
    }
    printf("です。\n");

    return 0;
}