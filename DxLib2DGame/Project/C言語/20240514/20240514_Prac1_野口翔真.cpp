#include<stdio.h>
#pragma warning(disable:4996)

typedef struct ExamResult
{
    char name[128];
    int score;
    char record;

}ExamResult;

int main(void)
{
    ExamResult examresult;

    printf("���O����͂��Ă�������\n");
    scanf("%s", &examresult.name);

    printf("�_������͂��Ă�������\n");
    scanf("%d", &examresult.score);

    if (0 <= examresult.score || 100 <= examresult.score)
    {
        if (examresult.score >= 90)
        {
            examresult.record = 'S';

        }
        else if (examresult.score >= 70)
        {
            examresult.record = 'A';
        }
        else if (examresult.score >= 50)
        {
            examresult.record = 'B';
        }
        else if (examresult.score >= 30)
        {
            examresult.record = 'C';
        }
        else
        {
            examresult.record = 'D';
        }
    }
    printf("���O:%s\n�_��:%d\n���ѕ]��:%c",examresult.name,examresult.score,examresult.record);
    
    return 0;
}