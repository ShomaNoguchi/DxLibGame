#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int num;
    int sum = 0;
    int cnt = 0;
    //数字の入力
    printf("ユーザーに正の整数を入力させましょう\nユーザーが負の整数を入力した場合、プログラムは入力を終了し、合計値を表示しましょう。\n");
    do
    {
        cnt++;
        printf("整数を入力してください\n");
        scanf("%d", &num);

        sum += num;

        printf("%d回目の入力で、合計は%dとなります。\n", cnt, sum);
    } while (num >= 0);//入力した数字が負の数字でない限り繰り返す
    //合計数字の表示
    printf("合計数字は,%dです\n", sum);

    return 0;
}