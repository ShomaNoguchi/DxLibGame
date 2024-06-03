#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    int H;
    printf("グー:1チョキ:2パー:3 のいずれかを入力:");
    scanf("%d", &H);
    switch (H)
    {
     case  1:
        printf("グー");
        break;
     case  2:
         printf("チョキ");
         break;
     case  3:
         printf("パー");
         break;
     default:
         printf("1-3以外が入力されました");
    }
    return 0;
}