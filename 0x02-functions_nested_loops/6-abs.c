#include "main.h"

/**
 * _abs - finding absolute value of a figure
 * @i: variable to be used
 * Return: -i or i
 */

int _abs(int i)
{
	if (i < 0)
		return (-i);
	else if (i >= 0)
	{
		return (i);
	}
	return (0);
}
