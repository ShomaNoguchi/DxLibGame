#include "DxLib.h"

int WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	//äÓñ{ê›åv
	ChangeWindowMode(TRUE);
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);
	SetGraphMode(800, 600, 32);

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	int circleX = 150;
	int circleY = 200;
	int stringX = 10;
	int stringY = 15;
	int stringX1 = 10;
	int stringY1 = 50;
	int mouseX = 0;
	int mouseY = 0;
	int key = 0;

	int circlecolor = GetColor(0, 0, 255);
	int StringColor = GetColor(255, 255, 255);
	int StringColor2 = GetColor(255, 0, 0);


	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) == 0)
	{
		ClearDrawScreen();

		DrawCircle(circleX, circleY, 30, circlecolor, TRUE);

		GetMousePoint(&mouseX, &mouseY);

		if ((GetMouseInput() & MOUSE_INPUT_LEFT))
		{
			SetFontSize(30);
			DrawString(stringX1, stringY1, "Hit!", StringColor2);
		}

		if (CheckHitKey(KEY_INPUT_UP))
		{
			if (circleY <= 40)
			{
				circleY += 10;
			}
			else
			{
				circleY -= 3;
			}
		}
		if (CheckHitKey(KEY_INPUT_DOWN))
		{
			if (circleY >= 570)
			{
				circleY -= 10;
			}
			else
			{
				circleY += 3;
			}
		}
		if (CheckHitKey(KEY_INPUT_RIGHT))
		{
			if (circleX >= 765)
			{
				circleX -= 10;
			}
			else
			{
				circleX += 3;
			}
		}
		if (CheckHitKey(KEY_INPUT_LEFT))
		{
			if (circleX <= 40)
			{
				circleX += 10;
			}
			else
			{
				circleX -= 3;
			}
		}

		SetFontSize(32);
		//DrawString(10, 25, "HelloWould", StringColor);
		DrawFormatString(stringX, stringY, StringColor, "Mouse X:%d Y:%d", mouseX, mouseY);

		DrawCircle(circleX, circleY, 30, GetColor(0, 0, 255), TRUE);

		DrawPixel(320, 240, GetColor(255, 0, 0));

		ScreenFlip();

	}
	WaitKey();

	DxLib_End();

	return 0;
}