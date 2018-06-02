#include "grand_Pia.h"
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")


grand_Pia::grand_Pia(void)
{
}

void grand_Pia::playsequence(char p)
{
	
	if (p == '`')
	{
		PlaySound(TEXT("Grand/1.wav"), NULL, SND_ASYNC);
	}
	if (p == '1')
	{
		PlaySound(TEXT("Grand/2.wav"), NULL, SND_ASYNC);
	}
	if (p == '2')
	{
		PlaySound(TEXT("Grand/3.wav"), NULL, SND_ASYNC);
	}
	if (p == '3')
	{
		PlaySound(TEXT("Grand/4.wav"), NULL, SND_ASYNC);
	}if (p == '4')
	{
		PlaySound(TEXT("Grand/5.wav"), NULL, SND_ASYNC);
	}if (p == '5')
	{
		PlaySound(TEXT("Grand/6.wav"), NULL, SND_ASYNC);
	}if (p == '6')
	{
		PlaySound(TEXT("Grand/7.wav"), NULL, SND_ASYNC);
	}if (p == '7')
	{
		PlaySound(TEXT("Grand/8.wav"), NULL, SND_ASYNC);
	}if (p == '8')
	{
		PlaySound(TEXT("Grand/9.wav"), NULL, SND_ASYNC);
	}if (p == '9')
	{
		PlaySound(TEXT("Grand/10.wav"), NULL, SND_ASYNC);
	}if (p == '0')
	{
		PlaySound(TEXT("Grand/11.wav"), NULL, SND_ASYNC);
	}if (p == '-')
	{
		PlaySound(TEXT("Grand/12.wav"), NULL, SND_ASYNC);
	}if (p == '=')
	{
		PlaySound(TEXT("Grand/13.wav"), NULL, SND_ASYNC);
	}if (p == 'q')
	{
		PlaySound(TEXT("Grand/14.wav"), NULL, SND_ASYNC);
	}if (p == 'w')
	{
		PlaySound(TEXT("Grand/15.wav"), NULL, SND_ASYNC);
	}if (p == 'e')
	{
		PlaySound(TEXT("Grand/16.wav"), NULL, SND_ASYNC);
	}if (p == 'r')
	{
		PlaySound(TEXT("Grand/17.wav"), NULL, SND_ASYNC);
	}if (p == 't')
	{
		PlaySound(TEXT("Grand/18.wav"), NULL, SND_ASYNC);
	}if (p == 'y')
	{
		PlaySound(TEXT("Grand/19.wav"), NULL, SND_ASYNC);
	}if (p == 'u')
	{
		PlaySound(TEXT("Grand/20.wav"), NULL, SND_ASYNC);
	}if (p == 'i')
	{
		PlaySound(TEXT("Grand/21.wav"), NULL, SND_ASYNC);
	}if (p == 'o')
	{
		PlaySound(TEXT("Grand/22.wav"), NULL, SND_ASYNC);
	}if (p == 'p')
	{
		PlaySound(TEXT("Grand/23.wav"), NULL, SND_ASYNC);
	}if (p == '[')
	{
		PlaySound(TEXT("Grand/24.wav"), NULL, SND_ASYNC);
	}if (p == ']')
	{
		PlaySound(TEXT("Grand/25.wav"), NULL, SND_ASYNC);
	}if (p == 'a')
	{
		PlaySound(TEXT("Grand/26.wav"), NULL, SND_ASYNC);
	}if (p == 's')
	{
		PlaySound(TEXT("Grand/27.wav"), NULL, SND_ASYNC);
	}if (p == 'd')
	{
		PlaySound(TEXT("Grand/28.wav"), NULL, SND_ASYNC);
	}if (p == 'f')
	{
		PlaySound(TEXT("Grand/29.wav"), NULL, SND_ASYNC);
	}if (p == 'g')
	{
		PlaySound(TEXT("Grand/30.wav"), NULL, SND_ASYNC);
	}if (p == 'h')
	{
		PlaySound(TEXT("Grand/31.wav"), NULL, SND_ASYNC);
	}if (p == 'j')
	{
		PlaySound(TEXT("Grand/32.wav"), NULL, SND_ASYNC);
	}if (p == 'k')
	{
		PlaySound(TEXT("Grand/33.wav"), NULL, SND_ASYNC);
	}if (p == 'l')
	{
		PlaySound(TEXT("Grand/34.wav"), NULL, SND_ASYNC);
	}if (p == ';')
	{
		PlaySound(TEXT("Grand/35.wav"), NULL, SND_ASYNC);
	}if (p == 'z')
	{
		PlaySound(TEXT("Grand/36.wav"), NULL, SND_ASYNC);
	}if (p == 'x')
	{
		PlaySound(TEXT("Grand/37.wav"), NULL, SND_ASYNC);
	}if (p == 'c')
	{
		PlaySound(TEXT("Grand/38.wav"), NULL, SND_ASYNC);
	}if (p == 'v')
	{
		PlaySound(TEXT("Grand/39.wav"), NULL, SND_ASYNC);
	}if (p == 'b')
	{
		PlaySound(TEXT("Grand/40.wav"), NULL, SND_ASYNC);
	}if (p == 'n')
	{
		PlaySound(TEXT("Grand/41.wav"), NULL, SND_ASYNC);
	}if (p == 'm')
	{
		PlaySound(TEXT("Grand/42.wav"), NULL, SND_ASYNC);
	}if (p == ',')
	{
		PlaySound(TEXT("Grand/43.wav"), NULL, SND_ASYNC);
	}if (p == '.')
	{
		PlaySound(TEXT("Grand/44.wav"), NULL, SND_ASYNC);
	}if (p == '/')
	{
		PlaySound(TEXT("Grand/45.wav"), NULL, SND_ASYNC);
	}
}

grand_Pia::~grand_Pia(void)
{
}
