#include <stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int X;
    scanf("%d", &X);
    if (X % 2 == 0)
    {
        printf("���������͂���܂���\n");
    }
    else
    {
        printf("������͂���܂���\n");
    }
    return 0;
}