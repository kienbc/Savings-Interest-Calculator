#pragma once

#include "resource.h"

bool checkValue(WCHAR* str)
{
	int nDot = 0;
	for (int i = 0; i < wcslen(str); i++)
	{
		if (str[i] != '0' && str[i] != '1' && str[i] != '2' && str[i] != '3' && str[i] != '4' && str[i] != '5' && str[i] != '6' && str[i] != '7' && str[i] != '8' && str[i] != '9' && str[i] != '.')
			return false;
		if (str[i] == '.')
			nDot++;
	}
	if (nDot > 1) return false;
	return true;
}