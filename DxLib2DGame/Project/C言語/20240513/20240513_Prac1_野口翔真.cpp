#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
    int X;
    printf("1-12�܂ł̂����ꂩ�̂����\n");
    scanf("%d", &X);
    switch (X)
    {
    case 1:
        printf("1����31���ł�");
        break;
    case 2:
        printf("2����28���ł�");
        break;
    case 3:
        printf("3����31���ł�");
        break;
    case 4:
        printf("4����30���ł�");
        break;
    case 5:
        printf("5����30���ł�");
        break;
    case 6:
        printf("6����30���ł�");
        break;
    case 7:
        printf("7����31���ł�");
        break;
    case 8:
        printf("8����31���ł�");
        break;
    case 9:
        printf("9����30���ł�");
        break;
    case 10:
        printf("10����31���ł�");
        break;
    case 11:
        printf("11����30���ł�");
        break;
    case 12:
        printf("12����31���ł�");
        break;
    default:
        printf("���͂Ɍ�肪����܂��B");
    }
    return 0;
}