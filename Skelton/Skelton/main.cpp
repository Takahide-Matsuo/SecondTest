#include <DxLib.h>
#include<cassert>
#include <string>
#include<iomanip>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
//int main()
{
	DxLib::SetGraphMode(640, 480, 32);
	DxLib::ChangeWindowMode(true);
	DxLib::SetWindowText(L"2016030_èºîˆëÈèG");

	if (DxLib_Init())
	{
		return -1;
	}

	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0)
	{
		DxLib::ScreenFlip();
	}
	return 0;
}


