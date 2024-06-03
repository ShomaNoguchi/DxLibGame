#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    //変数宣言
    int i;              //ループカウント
    int num, tmp = 0;    //個数の値、カウント
    //個数を入力
    printf("個数を入力してください。\n");
    scanf("%d", &num);
    //個数分繰り返す
    for (i = 0; i < num; i++)
    {
        //printf("%d　", tmp);
        ////カウントで表示（ただし、9になったら0に戻す）
        //tmp++;
        //if (tmp > 9)
        //{
        //    tmp = 0;
        //    printf("\n");
        //}

        //別解
        printf("%d\n", i % 10);

    }
    return 0;
}