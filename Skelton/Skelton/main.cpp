#include <DxLib.h>
#include<cassert>
#include <string>


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	DxLib::SetWindowText(L"2016030_èºîˆëÈèG");
	ChangeWindowMode(true);
	DxLib_Init();

	DxLib::SetDrawScreen(DX_SCREEN_BACK);
	while (DxLib::ProcessMessage() == 0)
	{
		DxLib::ScreenFlip();
	}
	DxLib_End();
	
};

