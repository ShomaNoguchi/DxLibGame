#include<stdio.h>

int main(void)
{
    int num1, num2;
    int flag;

    for (num1 = 2; num1 <= 1000; ++num1)
    {
        flag = 0;
        for (num2 = 2; num2 < num1; ++num2)
        {
            if (num1 % num2 == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d\n", num1);
    }
    return 0;
}