#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int X;
    int Y;
    scanf("%d", &X);
    scanf("%d", &Y);
    printf("�����Z%d\n",X+Y);
    printf("�����Z%d\n", X - Y);
    printf("�|���Z%d\n", X * Y);
    printf("����Z%d\n", X / Y);
    printf("��Z%d\n", X % Y);
    
    return 0;
}
