#include <stdio.h>
int main(void)
{
    int r = 5;
    float L, S, p = 3.14f;
    int X = 10, Y = 15,t;

    L = r * 2 * p;
    S = r * r * p;

    t = X * Y;

    printf("�~��=%f �ʐ�=%f\n", L, S);
    printf("�����`�̖ʐ�=%d\n", t);
    return 0;

}