#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#pragma warning(disable:4996)

int main(void)
{
    //�ϐ��錾
    int ans = -1;   //�����l��-1
    int quesiotn;
    int cnt = 0;
    //�����̏�����
    srand((unsigned int)time(NULL));
    //���̐���
    quesiotn = rand() % 101;
    printf("�������ăQ�[�������_����0�`100�܂ł̐����𓖂Ă�Q�[���ł�\n");
    //�Q�[���J�n
    while (quesiotn != ans)
    {
        //�J�E���g��ǉ�
        cnt++;
        //�L�[�{�[�h�������
        //���̓`�F�b�N
        while (true)
        {
            printf("0����100�܂łŐ�������͂��Ă��������B\n");
            scanf("%d", &ans);
            if (0 > ans || 100 < ans)
            {
                printf("���͂Ɍ�肪����܂��B�ēx���͂��Ă��������B\n");
            }
            else
            {
                break;
            }
        }
        //�����Ȃ甲����
        //�s�����Ȃ�q���g���o��
        if (quesiotn > ans)
        {
            //������
            printf("�𓚂̐�����菬�����ł�\n");

        }
        else if (quesiotn < ans)
        {
            //�傫��
            printf("�𓚂̐������傫���ł�\n");
        }

    }

    //���ʂ�\��
    printf("���߂łƂ��������܂��I�I�����ł��I%d\n%d��ڂŔ����o���܂���\n", ans, cnt);
    return 0;
}