#include<stdio.h>
//“ñ‚Â’Ç‰Á‚Ì‚¨‚Ü‚¶‚È‚¢
#include<stdio.h>
#include<time.h>

int main(void)
{
    int radNumber;

    //—”‚Ì‰Šú‰»
    srand((unsigned int)time(NULL));

    radNumber = rand() % 16;
    printf("ƒ‰ƒ“ƒ_ƒ€‚È”š‚Í%d‚Å‚·\n", radNumber)


    return 0;

}