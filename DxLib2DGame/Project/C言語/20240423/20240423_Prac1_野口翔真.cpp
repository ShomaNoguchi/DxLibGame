#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int A, B, C, D, max;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    scanf("%d", &D);

    max = A;

    if (max < A)
    {
        max = A;
    }

    if (max < B)
    {
        max = B;
    }

    if (max < C)
    {
        max = C;
    }

    if (max < D)
    {
        max = D;
    }

    printf("Å‘å’l‚Í%d\n",max);

    return 0;
}



    
