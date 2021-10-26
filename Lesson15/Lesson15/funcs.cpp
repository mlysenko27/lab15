#include "funcs.h"

bool IsLeapYear(int y)
{
	return ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0));
}