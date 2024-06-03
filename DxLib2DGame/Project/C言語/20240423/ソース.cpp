#include<stdio.h>
#pragma warning(disable:4996)

int main(void)
{
    int a;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
    {
        printf("“ü—Í‚µ‚½”‚Í 0`10 ‚Ü‚Å‚Ì”‚Å‚·\n");
    }
    if(a < 0 || 10 < a)
    {
        printf("“ü—Í‚µ‚½”‚Í •‰‚Ì” ‚©10‚æ‚è‘å‚«‚¢”‚Å‚·\n");
    }
}