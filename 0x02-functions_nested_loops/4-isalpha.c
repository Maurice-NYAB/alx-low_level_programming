#include "main.h"

/**
 * _isalpha - checking for lower or upper case alphabets
 * @c: variable being checked
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
