#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#pragma warning(disable:4996)

int main(void)
{
    int CPU, PLAYER;
    int A;
    printf("ジャンケンゲーム\n0:グー　1:チョキ 2:パーを入力してください\n");
    
    srand((unsigned int)time(NULL));
    
    CPU = rand() % 3;
    
    scanf("%d", &PLAYER);

    if (PLAYER <= 0 && PLAYER <= 2)
    {
        printf("PLAYER:%d vs CPU:%d\n", PLAYER, CPU);
        
        A = PLAYER - CPU;
        
        if (A == -1 || A == 2)
        {
            printf("PLAYER WIN!\n");
        }
        
        else if (A== 0)
        {
            printf("DRAW\n");
        }
        
        else
        {
            printf("CPU WIN!\n");
        }

    }
    else
    {
        printf("入力に誤りがあります。");
    }
    return 0;
}