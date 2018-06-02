#include "rhodes_Pia.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


rhodes_Pia::rhodes_Pia(void)
{
}

void rhodes_Pia::playsequence(char p)
{
	
	if (p == 'q')
	{
		PlaySound(TEXT("Rhodes/1.wav"), NULL, SND_ASYNC);
	}
	if (p == 'w')
	{
		PlaySound(TEXT("Rhodes/2.wav"), NULL, SND_ASYNC);
	}
	if (p == 'e')
	{
		PlaySound(TEXT("Rhodes/3.wav"), NULL, SND_ASYNC);
	}if (p == 'r')
	{
		PlaySound(TEXT("Rhodes/4.wav"), NULL, SND_ASYNC);
	}if (p == 't')
	{
		PlaySound(TEXT("Rhodes/5.wav"), NULL, SND_ASYNC);
	}if (p == 'y')
	{
		PlaySound(TEXT("Rhodes/6.wav"), NULL, SND_ASYNC);
	}if (p == 'u')
	{
		PlaySound(TEXT("Rhodes/7.wav"), NULL, SND_ASYNC);
	}
}

rhodes_Pia::~rhodes_Pia(void)
{
}
