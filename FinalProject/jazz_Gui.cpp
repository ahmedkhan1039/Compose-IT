#include "jazz_Gui.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


jazz_Gui::jazz_Gui(void)
{
}

void jazz_Gui::playsequence(char p)
{
	
	if (p == 'q')
	{
		PlaySound(TEXT("J/1.wav"), NULL, SND_ASYNC);
	}
	if (p == 'w')
	{
		PlaySound(TEXT("J/2.wav"), NULL, SND_ASYNC);
	}
	if (p == 'e')
	{
		PlaySound(TEXT("J/3.wav"), NULL, SND_ASYNC);
	}
	if (p == 'r')
	{
		PlaySound(TEXT("J/4.wav"), NULL, SND_ASYNC);
	}
	if (p == 't')
	{
		PlaySound(TEXT("J/5.wav"), NULL, SND_ASYNC);
	}
	if (p == 'y')
	{
		PlaySound(TEXT("J/6.wav"), NULL, SND_ASYNC);
	}
	if (p == 'u')
	{
		PlaySound(TEXT("J/7.wav"), NULL, SND_ASYNC);
	}
	if (p == 'i')
	{
		PlaySound(TEXT("J/8.wav"), NULL, SND_ASYNC);
	}
	if (p == 'o')
	{
		PlaySound(TEXT("J/9.wav"), NULL, SND_ASYNC);
	}
	if (p == 'p')
	{
		PlaySound(TEXT("J/10.wav"), NULL, SND_ASYNC);
	}
	if (p == '[')
	{
		PlaySound(TEXT("J/11.wav"), NULL, SND_ASYNC);
	}
	if (p == ']')
	{
		PlaySound(TEXT("J/12.wav"), NULL, SND_ASYNC);
	}
	
}

jazz_Gui::~jazz_Gui(void)
{
}
