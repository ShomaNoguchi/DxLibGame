#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#pragma warning (disable:4996)

int main(void)
{
    // 変数宣言
    int i;
    int sale_day;
    int sale_month;
    int numder;
    int total=0;
    //乱数の初期化
    srand((unsigned int)time(NULL));
    //22日（営業分繰り返し）
    for (i = 0; i < 22; i++)
    {
        //ランダムで1日の食数と売上を計算、月の売り上げに追加]
        numder = rand() % 26;
        sale_day = numder * 950;
        total += numder;
        printf("%d日目%d食%d円\n", i + 1, numder, sale_day);
        //total=total+numder;
    }
    //売上金額(月間の売り上げ)を表示
    sale_month = total * 950;
    printf("\n月の合計食数は%dで、月の売上は%d円でした\n", total, sale_month);
    return 0;
}