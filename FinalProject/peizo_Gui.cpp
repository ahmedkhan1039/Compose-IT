#include "peizo_Gui.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")

peizo_Gui::peizo_Gui(void)
{
}

void peizo_Gui::playsequence(char p)
{
	
	if (p == 'q')
	{
		PlaySound(TEXT("P/1.wav"), NULL, SND_ASYNC);
	}
	if (p == 'w')
	{
		PlaySound(TEXT("P/2.wav"), NULL, SND_ASYNC);
	}
	if (p == 'e')
	{
		PlaySound(TEXT("P/3.wav"), NULL, SND_ASYNC);
	}
	if (p == 'r')
	{
		PlaySound(TEXT("P/4.wav"), NULL, SND_ASYNC);
	}
	if (p == 't')
	{
		PlaySound(TEXT("P/5.wav"), NULL, SND_ASYNC);
	}
	if (p == 'y')
	{
		PlaySound(TEXT("P/6.wav"), NULL, SND_ASYNC);
	}
	if (p == 'u')
	{
		PlaySound(TEXT("P/7.wav"), NULL, SND_ASYNC);
	}
	if (p == 'i')
	{
		PlaySound(TEXT("P/8.wav"), NULL, SND_ASYNC);
	}
	if (p == 'o')
	{
		PlaySound(TEXT("P/9.wav"), NULL, SND_ASYNC);
	}
	if (p == 'p')
	{
		PlaySound(TEXT("P/10.wav"), NULL, SND_ASYNC);
	}
	
}

peizo_Gui::~peizo_Gui(void)
{
}
