#include<stdio.h>
//��ǉ��̂��܂��Ȃ�
#include<stdio.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //�����̏�����
    srand((unsigned int)time(NULL));

    radNumber = rand() % 16;
    printf("�����_���Ȑ�����%d�ł�\n", radNumber)


    return 0;

}