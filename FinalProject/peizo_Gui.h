#pragma once
#include "Guitar_ins.h"
class peizo_Gui :public Guitar_ins
{
public:
	peizo_Gui(void);
	void playsequence(char p);
	~peizo_Gui(void);
};

