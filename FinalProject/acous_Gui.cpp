#include "acous_Gui.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


acous_Gui::acous_Gui(void)
{
}
void acous_Gui::playsequence(char p)
{
		if (p == 'q')
		{
			PlaySound(TEXT("CA/1.wav"), NULL, SND_ASYNC);
		}
		if (p == 'w')
		{
			PlaySound(TEXT("CA/2.wav"), NULL, SND_ASYNC);
		}
		if (p == 'e')
		{
			PlaySound(TEXT("CA/3.wav"), NULL, SND_ASYNC);
		}
		if (p == 'r')
		{
			PlaySound(TEXT("CA/4.wav"), NULL, SND_ASYNC);
		}
		if (p == 't')
		{
			PlaySound(TEXT("CA/5.wav"), NULL, SND_ASYNC);
		}
		if (p == 'y')
		{
			PlaySound(TEXT("CA/6.wav"), NULL, SND_ASYNC);
		}
		if (p == 'u')
		{
			PlaySound(TEXT("CA/7.wav"), NULL, SND_ASYNC);
		}
		if (p == 'i')
		{
			PlaySound(TEXT("CA/8.wav"), NULL, SND_ASYNC);
		}
		if (p == 'o')
		{
			PlaySound(TEXT("CA/9.wav"), NULL, SND_ASYNC);
		}
		if (p == 'p')
		{
			PlaySound(TEXT("CA/10.wav"), NULL, SND_ASYNC);
		}
		if (p == '[')
		{
			PlaySound(TEXT("CA/11.wav"), NULL, SND_ASYNC);
		}
		if (p == ']')
		{
			PlaySound(TEXT("CA/12.wav"), NULL, SND_ASYNC);
		}
		
}

acous_Gui::~acous_Gui(void)
{
}
