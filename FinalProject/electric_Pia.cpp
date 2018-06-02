#include "electric_Pia.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


electric_Pia::electric_Pia(void)
{
}
void electric_Pia::playsequence(char p)
{
	if (p == 'q')
	{
		PlaySound(TEXT("Electric/1.wav"), NULL, SND_ASYNC);
	}
	if (p == 'w')
	{
		PlaySound(TEXT("Electric/2.wav"), NULL, SND_ASYNC);
	}
	if (p == 'e')
	{
		PlaySound(TEXT("Electric/3.wav"), NULL, SND_ASYNC);
	}if (p == 'r')
	{
		PlaySound(TEXT("Electric/4.wav"), NULL, SND_ASYNC);
	}if (p == 't')
	{
		PlaySound(TEXT("Electric/5.wav"), NULL, SND_ASYNC);
	}if (p == 'y')
	{
		PlaySound(TEXT("Electric/6.wav"), NULL, SND_ASYNC);
	}if (p == 'u')
	{
		PlaySound(TEXT("Electric/7.wav"), NULL, SND_ASYNC);
	}
}

electric_Pia::~electric_Pia(void)
{
}
