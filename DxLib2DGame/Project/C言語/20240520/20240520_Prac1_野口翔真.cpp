#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#pragma warning (disable:4996)

int main(void)
{
    // �ϐ��錾
    int i;
    int sale_day;
    int sale_month;
    int numder;
    int total=0;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //22���i�c�ƕ��J��Ԃ��j
    for (i = 0; i < 22; i++)
    {
        //�����_����1���̐H���Ɣ�����v�Z�A���̔���グ�ɒǉ�]
        numder = rand() % 26;
        sale_day = numder * 950;
        total += numder;
        printf("%d����%d�H%d�~\n", i + 1, numder, sale_day);
        //total=total+numder;
    }
    //������z(���Ԃ̔���グ)��\��
    sale_month = total * 950;
    printf("\n���̍��v�H����%d�ŁA���̔����%d�~�ł���\n", total, sale_month);
    return 0;
}