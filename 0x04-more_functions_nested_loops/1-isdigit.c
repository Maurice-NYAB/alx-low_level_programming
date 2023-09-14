#include "main.h"

/**
 * _isdigit-Function for checking number 1 to 9
 * @c: The variable
 * Return: 1 or 0 upon execution
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
